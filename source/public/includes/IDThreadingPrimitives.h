//========================================================================================
//  
//  $File$
//  
//  Owner: Florin Trofin
//  
//  $Author$
//  
//  $DateTime$
//  
//  $Revision$
//  
//  $Change$
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#pragma once
#ifndef __IDTHREADINGPRIMITIVES__
#define __IDTHREADINGPRIMITIVES__

#include <boost/shared_ptr.hpp>
#include <boost/noncopyable.hpp>
#include <boost/static_assert.hpp>
#include <boost/mpl/or.hpp>
#include <boost/utility/enable_if.hpp>
#include <boost/type_traits.hpp>
#include <vector>

#ifdef MACINTOSH
#include <pthread.h>
#include <libkern/OSAtomic.h>
#endif

namespace IDThreading
{
	/** ID of a thread entity.
		DO NOT CALL THIS IN APPLICATION CODE! IT SHOULD BE USED ONLY BY THE ARCHITECTURE TEAM!
		USE ExecutionContextIDs instead!
	*/
#ifdef MACINTOSH
	typedef pthread_t ThreadID;
#elif defined(WINDOWS)	
	typedef DWORD ThreadID;
#elif WASM
	typedef int ThreadID;
#endif

	/** ID of a thread domain
		DO NOT CALL THIS IN APPLICATION CODE! IT SHOULD BE USED ONLY BY THE ARCHITECTURE TEAM!
		USE ExecutionContextIDs instead!
	*/
	typedef ThreadID ThreadDomainID;

	// Invalid thread and thread domain IDs.
	extern RUNTIME_DECL const ThreadID kInvalidThreadID;
	extern RUNTIME_DECL const ThreadDomainID kInvalidThreadDomainID;

	/** Returns the thread id of the calling entity.
		DO NOT CALL THIS IN APPLICATION CODE! IT SHOULD BE USED ONLY BY THE ARCHITECTURE TEAM!
		USE CurrentExecutionContextID() INSTEAD!
		@return the current thread id.
	*/
	RUNTIME_DECL ThreadID GetCurrentThreadId();

	/** Returns the ThreadDomainID for the calling thread.
		DO NOT CALL THIS IN APPLICATION CODE! IT SHOULD BE USED ONLY BY THE ARCHITECTURE TEAM!
		USE CurrentExecutionContextID() INSTEAD!
		A thread domain is a set of threads that never run preemptively against each other,
		but are scheduled cooperatively (as fibers on Win32 are).  Currently, each thread
		is simply its own thread domain with the exception that the original thread of
		execution and the qa thread both live in one thread domain on the Mac (on Windows
		these are two fibers within one thread).  This function is intended to be used to
		check for thread safety.
		@returns the calling thread's domain ID.
	*/
	RUNTIME_DECL ThreadDomainID GetCurrentThreadDomainId ();
	

	/** Checks if the calling thread is the one that initialized the application (the main thread),
		or is the qa thread that runs cooperatively with this thread on Mac.
		@return true if the calling entity is the main thread (or qa thread), false otherwise.
	*/
	RUNTIME_DECL bool IsMainThreadDomain();


	/** Retrieves the number of hardware cores that are enabled on this machine.
	*/
	RUNTIME_DECL uint32 GetHardwareConcurrency();

	// Discriminator for the size type for atomic operations
	template <int s>
	struct SizeType
	{
		enum { valueSize = s };
	};

	template<size_t sizeInBytes>
	struct AtomicTraits
	{
		template <typename T>
		static T Increment(T& value);

		template <typename T>
		static T Decrement(T& value);	
	};
	
	/** Increments by one the specified integer as an atomic operation.
		This function generates a full memory barrier (or fence) to ensure that memory operations are completed in order.
		The memory address of value must be naturally aligned, ie 32-bit aligned
		for 32-bit operations and 64-bit aligned for 64-bit operations.
		@param value The integer to increment
		@return the new value after the operation has been performed
	*/
	template<typename T>
	typename boost::enable_if<boost::is_integral<T>, T>::type
	AtomicIncrement(T& value)
	{
		// 32 or 64 bit values
		BOOST_STATIC_ASSERT(sizeof(T) == 4 || sizeof(T) == 8);
		return AtomicTraits<sizeof(T)>::Increment(value);	
	}

	/** Decrement by one the specified integer as an atomic operation.
		This function generates a full memory barrier (or fence) to ensure that memory operations are completed in order.
		The memory address of value must be naturally aligned, ie 32-bit aligned
		for 32-bit operations and 64-bit aligned for 64-bit operations.
		@param value The integer to decrement
		@return the new value after the operation has been performed
	*/
	template<typename T>
	typename boost::enable_if<boost::is_integral<T>, T>::type
	AtomicDecrement(T& value)
	{
		// 32 or 64 bit values
		BOOST_STATIC_ASSERT(sizeof(T) == 4 || sizeof(T) == 8);
		return AtomicTraits<sizeof(T)>::Decrement(value);	
	}

	// Implementations for the atomic operations
	// Do not call these directly
#ifdef MACINTOSH

	template<>
	struct AtomicTraits<4>
	{
		template <typename T>
		static inline T Increment(T& value)
		{
			return ::OSAtomicIncrement32Barrier((int32_t*)(&value));
		}
		
		template <typename T>
		static inline T Decrement(T& value)
		{
			return ::OSAtomicDecrement32Barrier((int32_t*)(&value));
		}
	};	

#if defined(__ppc64__) || defined(__i386__) || defined(__x86_64__) || defined(__arm64__)

	template<>
	struct AtomicTraits<8>
	{
		template <typename T>
		static inline T Increment(T& value)
		{
			return ::OSAtomicIncrement64Barrier((int64_t*)(&value));
		}
		
		template <typename T>
		static inline T Decrement(T& value)
		{
			return ::OSAtomicDecrement64Barrier((int64_t*)(&value));
		}
	};	

#endif  // defined(__ppc64__) || defined(__i386__) || defined(__x86_64__)

#elif defined(WINDOWS)	
	
	template<>
	struct AtomicTraits<4>
	{
		template <typename T>
		static inline T Increment(T& value)
		{
			return ::InterlockedIncrement(reinterpret_cast<volatile long*>(&value));
		}
		
		template <typename T>
		static inline T Decrement(T& value)
		{
			return ::InterlockedDecrement(reinterpret_cast<volatile long*>(&value));
		}
	};	
	

	template<>
	struct AtomicTraits<8>
	{
		template <typename T>
		static inline T Increment(T& value)
		{
			return ::InterlockedIncrement64(reinterpret_cast<volatile long long*>(&value));
		}
		
		template <typename T>
		static inline T Decrement(T& value)
		{
			return ::InterlockedDecrement64(reinterpret_cast<volatile long long*>(&value));
		}
	};		

#endif // defined(WINDOWS)

#ifdef WASM
	template<>
		struct AtomicTraits<4>
		{
			template <typename T>
			static inline T Increment(T& value)
			{
				return value + 1;
			}
			
			template <typename T>
			static inline T Decrement(T& value)
			{
				return value - 1;
			}
		};
	template<>
		struct AtomicTraits<8>
		{
			template <typename T>
			static inline T Increment(T& value)
			{
				return value + 1;
			}
			
			template <typename T>
			static inline T Decrement(T& value)
			{
				return value - 1;
			}
		};	
#endif // WASM


} //IDThreading
#endif // __IDTHREADINGPRIMITIVES__
