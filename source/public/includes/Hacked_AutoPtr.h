//========================================================================================
//  
//  $File$
//  
//  Owner:
//  
//  $Author$
//  
//  $DateTime$
//  
//  $Revision$
//  
//  $Change$
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 2019 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  All information contained herein is, and remains
//  the property of Adobe Systems Incorporated and its suppliers,
//  if any.  The intellectual and technical concepts contained
//  herein are proprietary to Adobe Systems Incorporated and its
//  suppliers and may be covered by U.S. and Foreign Patents,
//  patents in process, and are protected by trade secret or copyright law.
//  Dissemination of this information or reproduction of this material
//  is strictly forbidden unless prior written permission is obtained
//  from Adobe Systems Incorporated.
//  
//  
//========================================================================================

#ifndef __HACKED_AUTO_PTR__
#define __HACKED_AUTO_PTR__

#ifdef __cplusplus
namespace indesign
{
    template <class _Tp>
    struct  hacked_auto_ptr_ref
    {
        _Tp* ptr_;
    };

    template<class _Tp>
    class hacked_auto_ptr
    {
    private:
        _Tp* ptr_;
    public:
        typedef _Tp element_type;

         explicit hacked_auto_ptr(_Tp* p = 0) throw() : ptr_(p) {}
         hacked_auto_ptr(hacked_auto_ptr& p) throw() : ptr_(p.release()) {}
        template<class _Up>  hacked_auto_ptr(hacked_auto_ptr<_Up>& p) throw()
            : ptr_(p.release()) {}
         hacked_auto_ptr& operator=(hacked_auto_ptr& p) throw()
            {reset(p.release()); return *this;}
        template<class _Up>  hacked_auto_ptr& operator=(hacked_auto_ptr<_Up>& p) throw()
            {reset(p.release()); return *this;}
         hacked_auto_ptr& operator=(hacked_auto_ptr_ref<_Tp> p) throw()
            {reset(p.ptr_); return *this;}
         ~hacked_auto_ptr() throw() {delete ptr_;}

         _Tp& operator*() const throw()
            {return *ptr_;}
         _Tp* operator->() const throw() {return ptr_;}
         _Tp* get() const throw() {return ptr_;}
         _Tp* release() throw()
        {
            _Tp* t = ptr_;
            ptr_ = 0;
            return t;
        }
         void reset(_Tp* p = 0) throw()
        {
            if (ptr_ != p)
                delete ptr_;
            ptr_ = p;
        }

         hacked_auto_ptr(hacked_auto_ptr_ref<_Tp> p) throw() : ptr_(p.ptr_) {}
        template<class _Up>  operator hacked_auto_ptr_ref<_Up>() throw()
            {hacked_auto_ptr_ref<_Up> t; t.ptr_ = release(); return t;}
        template<class _Up>  operator hacked_auto_ptr<_Up>() throw()
            {return hacked_auto_ptr<_Up>(release());}
    };

    template <>
    class hacked_auto_ptr<void>
    {
    public:
        typedef void element_type;
    };

}

#endif

#endif // __HACKED_AUTO_PTR__


