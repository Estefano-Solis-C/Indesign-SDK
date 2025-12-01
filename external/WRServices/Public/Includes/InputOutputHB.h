//========================================================================================
//  
//  File: InputOutputHB.h
//  
//  Author: Shubhi Mohta
//  
//  Copyright 2018 Adobe Inc.
//  Usage rights licenced to Adobe Inc.
//  
//========================================================================================
#pragma once
#ifndef _InputOutputHB_
#define _InputOutputHB_


#include "WRConfig.h"
#include "SubstitutionLog.h"
#include "WRDefines.h"
#include "WRClass.h"
#include "WRVector.h"
#include <vector>
#include <map>
#ifdef WR_WIN_ENV
#include<memory>
#endif
typedef WRInt32			HBIndex;
typedef WRInt32 HBInnerPosition;
/*
InputOutputHB is the Input-Output Interface when Harfbuzz Shaping is used.

Each output glyph has a cluster value assigned to it with the possiblity of many glyphs forming a cluster and hence having the same cluster value in case of complex scripts;

HBClusters
-clusterValue: cluster value (with 0 being the first cluster). Cluster value of a cluster is the smallest index of the input characters which form that cluster. Hence cluster values might not be continuous values .
-glyphStart/glyphEnd: tells us the start and end of the glyphs forming a cluster
-unicodeStart/UnicodeEnd: tells us the start and end of the input unicodes forming a cluster

All Hit-Test, Selection, cursor movement workflows should be cluster based.


*/
class HBClusters
{
public:
	HBClusters(): clusterValue(-1), glyphStart(-1), glyphEnd(-1), unicodeStart(-1), unicodeEnd(-1), isRTLCluster(false) {};
	HBClusters& operator=(const HBClusters& rhs) {
		glyphEnd = rhs.glyphEnd;
		glyphStart = rhs.glyphStart;
		unicodeStart = rhs.unicodeStart;
		unicodeEnd = rhs.unicodeEnd;
		clusterValue = rhs.clusterValue;
		isRTLCluster = rhs.isRTLCluster;
        return *this;
	};
	HBClusters(WRInt32 a, WRInt32 b, WRInt32 c, WRInt32 d, WRInt32 e,bool isRTL=false) : clusterValue(a), glyphStart(b), glyphEnd(c), unicodeStart(d), unicodeEnd(e),isRTLCluster(isRTL) {
        //if(isRTLCluster) {
            //std::swap(unicodeStart,unicodeEnd);
        //if(isRTLCluster) std::swap(glyphStart,glyphEnd);
        //}
    };
	WRInt32 clusterValue;
	WRInt32 glyphStart;
	WRInt32 glyphEnd;
	WRInt32 unicodeStart;
	WRInt32 unicodeEnd;
    bool isRTLCluster;
	bool operator==(HBClusters& rhs);
};
typedef std::shared_ptr<HBClusters> HBClustersPTR;
class WRAutoTextRange
{
	public:
	WRAutoTextRange(WRInt32 a = 0, WRInt32 b = 0)
	{
		startIndex = a;
		endIndex = b;
	}
	WRInt32 startIndex;
	WRInt32 endIndex;
};
class HBRun
{
public:
	HBRun() { }
	HBRun(HBIndex c, WRInt32 d) { count = c; data = d; }
	HBIndex count; // no of characters/glyphs
	WRInt32	data;// start index
};

class HBRunList : public WRVector<HBRun>
{
public:
	HBIndex	GetLength() const { WRInt32 res = 0; for (WRInt32  i = 0; i < fSize; i++) res += fData[i].count; return res; }
    void CheckAndAppend(HBRun& hbrun );
};
enum class WRIODirection {
    DIRECTION_LTR = 4,
    DIRECTION_RTL,
    DIRECTION_TTB,
    DIRECTION_BTT
};

class HarfBuzzRun {
public:
	HarfBuzzRun() {
		fCharacterStartIndex = 0;
		fNumCharacters = 0;
		fGlyphStartIndex = 0;
		fNumGlyphs = 0;
		fDirection = WRIODirection::DIRECTION_LTR;
	};
	HarfBuzzRun(WRInt32 ix, size_t ch_count, WRInt32 gix, size_t g_count, WRIODirection dir) :
		fCharacterStartIndex(ix), fNumCharacters(ch_count), fGlyphStartIndex(gix), fNumGlyphs(g_count), fDirection(dir) {};
	bool isRTLHBRun() const { return fDirection == WRIODirection::DIRECTION_RTL; }
	WRInt32 fCharacterStartIndex;
	size_t fNumCharacters;
	WRInt32 fGlyphStartIndex;
	size_t fNumGlyphs;
	WRIODirection fDirection;
};
typedef std::vector<HarfBuzzRun> HarfBuzzRunList;
class WRSERVICES_DECL InputOutputHB : public WRClass
{
public:
	virtual WRInt32 WR_DLLLOCAL getGlyphClusterValue(WRInt32 glyphIndex) const = 0;//return the cluster value of the glyph
	virtual WRInt32 WR_DLLLOCAL getUnicodeClusterValue(WRInt32 unicodeIndex) const = 0;//returns the cluster value of input character
	virtual HBClusters WR_DLLLOCAL getCluster(WRInt32 clusterValue) = 0; //returns HBCluster corresponding to the output clusters
	enum {
		kInputOutputHB_NoErr, kInputOutputHB_AllocErr, kInputOutputHB_OutOfRangeErr
	};
	virtual ~InputOutputHB(){};
    virtual InputOutputHB* getCopy()=0;
	virtual void Reset() = 0;
	virtual void setInputCount(WRInt32 count) = 0;
	virtual void setOutputCount(WRInt32 count) = 0;
	virtual WRInt32 getInputCount() = 0 ;
	virtual WRInt32 getOutputCount() = 0 ;
	virtual HBClusters getClusterFromGlyph(WRInt32 glyphIndex) const = 0 ;// returns HBCluster of the glyph
	virtual HBClusters getClusterFromUnicode(WRInt32 unicodeIndex) const = 0;// returns HBCluster corresponding to the input character

	virtual WRInt32 Extract(InputOutputHB& extractedIOMapping, WRInt32 start, WRInt32 count) const = 0;//NOTE: This does not update fUTFMapping. To update the Mapping use ExtractClientEncoding after Extract with the extractedIOMapping returned from this API
	virtual WRInt32 ExtractClientEncoding(InputOutputHB& extractedIOMapping, WRInt32 start, WRInt32 count) const = 0;
	virtual void AppendUTFMappingRange(WRInt32 nb, WRInt32 itemSz) = 0;

	virtual WRInt32 Copy(const InputOutputHB& b) = 0;
	virtual WRInt32 Catenate(const InputOutputHB& b) = 0;
	//empty assignment operator
	virtual InputOutputHB& operator = (const InputOutputHB& t);
	/*
	takes input runs and updates the count to reflect the number of output glyphs of the run
	*/
	virtual void Replay(HBRunList& runs, WRInt32 startPos) = 0;

	/*
    Updating the vector with autotext mapping
	*/
	virtual void updateAutoText(std::map<WRInt32, WRInt32> mapping) = 0;
	/*
	void OutputToInput(HBIndex glyphIndex, HBInnerPosition &inner, HBIndex &characterIndex);

	-glyphIndex : 0-based index of the output glyph sequence
	-inner: As input it contains the portion(0-100) of the glyph
			As output it return 0 or 100 as described below
	-charcaterIndex: the start or end unicodeIndex of the range of unicodes forming the output cluster which contains the output glyph(glyphIndex)
	1. if the glyph is part of the first half of the cluster ; it returns the start unicode and inner=0
	2. if the glyph is part of the secont half od the cluster; it returns the end unicode and inner=100
	*/
	virtual void OutputToInput(HBIndex glyphIndex, HBInnerPosition &inner, HBIndex &characterIndex) = 0;
	/*
	void InputToOutput(HBIndex characterIndex, HBInnerPosition &inner, HBIndex &glyphIndex);

	-characterIndex : 0-based index of the input unicode sequence
	-inner: As input it contains the portion(0-100) of the unicode character
			As output it returns 0 or 100 as described below
	-glyphIndex: the start or end glyphIndex of the range of glyphs forming the output cluster which is formed by the input unicode(characterIndex)

	1. if the unicode character is part of the first half of the cluster ; it returns the start glyph and inner=0
	2. if the unicode character is part of the secont half od the cluster; it returns the end glyph and inner=100
	*/

	virtual void InputToOutput(HBIndex characterIndex, HBInnerPosition &inner, HBIndex &glyphIndex) = 0 ;

	//API corresponding to traditional APIs in Substitution Log
	/*
	WRInt32 MaxExtent(WRInt32 len, WRInt32 startPos = 0) const;

	returns maximum of len or fOutputCount
	*/
    virtual void inputRangeToOutputRanges(const SLRange& inputRange, SLRangeList& outputRanges) = 0;
	virtual void outputRangeToInputRanges(const SLRange& outputRange, SLRangeList& inputRanges) = 0;
	virtual WRInt32 MaxExtent(WRInt32 len, WRInt32 startPos = 0) const = 0;
    virtual bool RTL() = 0;
    virtual WRVector<WRInt32>& getUTFMapping() = 0;
    virtual void SetUTFMapping(const WRVector<WRInt32>& mapping) =0;
	static InputOutputHB* createMapping(); // This will create empty mapping object. As of now there is one impl of base class hence not taking any parameter in function
	virtual WRInt32 getEncodedInputCount() const = 0;
	virtual const HBRunList& getInputRuns() const = 0;
	virtual const HBRunList& getOutputRuns() const = 0;
	virtual const WRVector<WRInt32>& getInputClusters() const = 0;
	virtual const WRVector<WRFloat>& getGlyphPositions() const = 0;
	virtual const WRVector<WRInt32>& getUpdatedInputClusters() const = 0;
	virtual const WRVector<WRInt32>& getOutputClusters() const = 0;
	virtual const WRVector<WRInt32>& getAutoTextInternalToClient() const = 0; 
	virtual const WRVector<WRInt32>& getAutoTextClientToInternal() const = 0; 
	virtual const std::map<WRInt32, WRAutoTextRange>& getAutoTextMapping() const = 0;  
	virtual const std::map<int, HBClustersPTR>& getClusterInfo() const = 0; 
	virtual const HarfBuzzRunList& getOutputHarfbuzzRunList() const = 0; 
	virtual const HarfBuzzRunList& getInputHarfbuzzRunList() const = 0; 
};
template <class T> WRInt32 ReplayInputOutputHB(InputOutputHB& mapping, T* t, WRInt32 len = 0, WRInt32 maxLen = 0, WRInt32 startPos = 0)
{
	//We are assuming that the client is passing full input text in t ; 
	WRUNUSED(maxLen);//not making use of maxLen as of now.These have been kept to make this API similar to Substitution Log APIs.
	T* copyOf_t = new T[len];
	for (int i = 0; i < len; i++)
	{
		copyOf_t[i] = t[i];
	}

	WRInt32 count = mapping.getInputCount();
	if (t != NULL)
	{
		HBClusters prevcluster;
		//HBClusters prevcluster = mapping.getClusterFromUnicode(startPos);
		for (int i = startPos; i < count; i++)
		{
			HBClusters cluster = mapping.getClusterFromUnicode(i);
			while(cluster.clusterValue == prevcluster.clusterValue) // WRSERVICES-1488 to avoid infinite loop in ID hyphen across a box
				cluster = mapping.getClusterFromUnicode(i++);
			
			if (cluster.clusterValue == prevcluster.clusterValue)
				break;

			int unicodeStart = cluster.unicodeStart;
			int unicodeEnd = cluster.unicodeEnd;
			int glyphStart = std::min(cluster.glyphStart,cluster.glyphEnd);
			int glyphEnd = std::max(cluster.glyphStart,cluster.glyphEnd);
			int replace = unicodeStart;
			for (int i_unicode = unicodeStart; i_unicode <= unicodeEnd; i_unicode++) // does not make much sense as ID does not pass unicode values in t
			{
				if (copyOf_t[i_unicode] == 0x0020 || copyOf_t[i_unicode] == 0x0007 || copyOf_t[i_unicode] == 0x0008 || copyOf_t[i_unicode] == 0x0009 || 
					copyOf_t[i_unicode] == 0x000A || copyOf_t[i_unicode] == 0x000D || copyOf_t[i_unicode] == 0x200B)
					continue;
				else
				{
					replace = i_unicode;
					break;
				}
			}
			for (int j = glyphStart; j <= glyphEnd; j++)
				t[j] = copyOf_t[replace];
			i = unicodeEnd;
			prevcluster = cluster;
		}
	}
	delete[] copyOf_t;
	return mapping.getOutputCount();
}
template <class T> WRInt32 ReplayInputOutputHBClientEncoding(InputOutputHB& mapping, T* t, WRInt32 len = 0, WRInt32 maxLen = 0)
{
	WRUNUSED(maxLen);
	T* in = t;
	T* out = in;
    WRVector<WRInt32>& hbUTFMapping=mapping.getUTFMapping();
	for (WRInt32 i = 0; i < hbUTFMapping.Size(); i++)
	{
		WRInt32 count = hbUTFMapping[i] >> 4;
		WRInt32 packSz = hbUTFMapping[i] & 0x0F;
		for (WRInt32 j = 0; j < count; j++)
		{
			*(out++) = *in;
			in += packSz;
		}
	}
	len -= t - out;
	return ReplayInputOutputHB(mapping, t, len, maxLen, 0);
}


#endif // ! _InputOutputHB_
