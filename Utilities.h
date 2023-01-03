// Utilities.h: interface for the CUtilities class.
/*
* class CUtilities:

Class's methods:
1.	ui32Pow and ui64Pow which calculate the power using unsigned integer and unsigned integer 64 bit.
2.	ConvertStr13ToNo, ConvertStr6ToNo which convert the string value to an equivalent number.
3.	ConvertNoToStr13, ConvertNoToStr6 which convert the number to its equivalent string characters.
4.	RemoveUnValidChars which removes any non arabic characters.
This class is used while translating the Arabic words in a lexicon, identifying the word, and cleaning the input word for processing.
*/
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_UTILITIES_H__6B8498D6_F303_412A_9A7A_B1CDF86A4934__INCLUDED_)
#define AFX_UTILITIES_H__6B8498D6_F303_412A_9A7A_B1CDF86A4934__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "LexiconDB.h" // class to be used as a lexicon 
#define MAXUINT64	  18446744073709551610
///////////////////////////////////////////////////////////////////
int CompareLexID(const CLexiconDB* key, const CLexiconDB* elem2);
int CompareLexID64(const CLexiconDB1* key, const CLexiconDB1* elem2);
///////////////////////////////////////////////////////////////////
class CUtilities  
{
public:
	BYTE* RemoveDiacratics(BYTE *StrVal);
	unsigned long ui32Pow(BYTE uibase, BYTE uiexp);
	unsigned __int64 ui64Pow(BYTE uibase,  BYTE uiexp);
	ConvertNoToStr13(unsigned __int64 CoreId, char* CoreVal);
	ConvertNoToStr6(unsigned long CoreId, char* CoreVal);
	unsigned  __int64 ConvertStr13ToNo(char* StrCore);
	unsigned long ConvertStr6ToNo(char* StrCore);
	CUtilities();
	~CUtilities();

};

#endif // !defined(AFX_UTILITIES_H__6B8498D6_F303_412A_9A7A_B1CDF86A4934__INCLUDED_)
