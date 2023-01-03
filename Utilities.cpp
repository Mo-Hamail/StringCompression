// Utilities.cpp: implementation of the CUtilities class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "WR.h"
#include "CharMapings.h"
#include "Utilities.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CUtilities::CUtilities()
{

}

CUtilities::~CUtilities()
{

}

unsigned long CUtilities::ConvertStr6ToNo(char *pszCoreVal)
{
	BYTE StrLen = strlen((char*)pszCoreVal);
//	if(StrLen > 7)
//		int z = 0;
	CCharMapings	ChMaps;
	unsigned long  m_uiCoreId = 0;
	if(pszCoreVal[0] != '0')
	{
		for(BYTE index = 0; index < StrLen; index++)
		{
			m_uiCoreId = m_uiCoreId + ( (ChMaps.CharMapTable[(BYTE)(pszCoreVal[index] - 192)]) * ui32Pow(37, index));
		}
	}
	return m_uiCoreId;
}

CUtilities::ConvertNoToStr6(unsigned long CoreIdVal, char* CoreVal)
{
	char	CoreStr[7], Reminder, index =0;
	CCharMapings	ChMaps;
	strcpy(CoreStr,"0");
	if(CoreIdVal != 0 )
	{
		do
		{
			Reminder = (char)CoreIdVal % 37;
			CoreIdVal = CoreIdVal / 37;
			CoreStr[index] = ChMaps.NoToCharTable[Reminder] + 192;
			index++;
		}while(CoreIdVal!=0);
		CoreStr[index] = NULL;
	}
	
	if(strcmp(CoreStr, CoreVal))
		int x = strlen(CoreVal);
}

///////////////////////////////////////////////////////////////////
unsigned  __int64 CUtilities::ConvertStr13ToNo(char *pszCoreVal)
{
	BYTE StrLen = strlen((char*)pszCoreVal);
	if(StrLen > 13)
		int z = 0;

	CCharMapings	 ChMaps;
	unsigned __int64 m_uiCoreId = 0;
	if(pszCoreVal[0] != '0')
	{
		for(BYTE index = 0; index < StrLen; index++)
		{
			if(pszCoreVal[index] == '.')
				m_uiCoreId = (unsigned __int64)m_uiCoreId + ( (ChMaps.CharMapTable[0]) * ui64Pow(37, index));
			else
				m_uiCoreId = (unsigned __int64)m_uiCoreId + ( (ChMaps.CharMapTable[(BYTE)pszCoreVal[index] - 192]) * ui64Pow(37, index));
		}
  }
	return m_uiCoreId;

}

CUtilities::ConvertNoToStr13(unsigned __int64 CoreIdVal, char* CoreVal)
{
	BYTE	CoreStr[14], Reminder, index =0;
	CCharMapings	ChMaps;
	strcpy((char*)CoreStr,"0");
	if(CoreIdVal != 0 )
	{
		do
		{
			Reminder = (BYTE)CoreIdVal % 37;
			CoreIdVal = CoreIdVal / 37;
			if(Reminder ==0)
				CoreStr[index] = ChMaps.NoToCharTable[Reminder];
			else
				CoreStr[index] = ChMaps.NoToCharTable[Reminder] + 192;
			index++;
		}while(CoreIdVal!=0);
		CoreStr[index] = NULL;
	}
	if(strcmp((char*)CoreStr, (char*)CoreVal))
		int x = 0;
}

unsigned __int64 CUtilities::ui64Pow(BYTE uibase, BYTE uiexp)
{
	unsigned __int64 result = 1;
	if(uiexp == 0)
		return 1;
	else if(uibase == 0)
		return 0;
	for(BYTE ndx =0; ndx < uiexp; ndx++)
	{
		result = result * uibase;
	}
	return result;
}

unsigned long CUtilities::ui32Pow(BYTE uibase, BYTE uiexp)
{
	unsigned long result = 1;
	if(uiexp == 0)
		return 1;
	else if(uibase == 0)
		return 0;
	for(BYTE ndx =0; ndx < uiexp; ndx++)
	{
		result = result * uibase;
	}
	return result;
}
BYTE* CUtilities::RemoveDiacratics(BYTE *StrVal)
{
//	BYTE DiacraticsArray[]= {0xf0, 0xf1, 0xf2, 0xf3, 0xf5, 0xf6, 0xf8, 0xfa};
	BYTE StrLen = strlen((char*)StrVal);
	BYTE* StrTemp = new BYTE[StrLen];
	for (BYTE index = 0, tempNdx = 0; index < StrLen; index++)
	{
		if(StrVal[index] < 0xEE && StrVal[index] > 0xBF) //192 && 238
		{
			if(StrVal[index] != 220) // is equale to  ÇááÜÜÜÜÜÜÜÜå cashida
			{
				StrTemp[tempNdx] = StrVal[index];
				tempNdx++;
			}
		}
		else
		{
			if(StrVal[index] == 46) // special case for the dot . B.B.C
			{
				StrTemp[tempNdx] = StrVal[index];
				tempNdx++;
			}
			else
			{
				return NULL; // the word contains non-arabic chars...
			}
		}
	}
	StrTemp[tempNdx] = NULL;
	return StrTemp;
}
///////////////////////////////////////////////////////////////////////////
int CompareLexID(const CLexiconDB* key, const CLexiconDB* elem2)
{

	if(key->m_uiCoreId > elem2->m_uiCoreId)
		return 1;
	else if(key->m_uiCoreId < elem2->m_uiCoreId)
		return -1;
	else
		return 0;
}
int CompareLexID64(const CLexiconDB1* key, const CLexiconDB1* elem2)
{

	if(key->m_uiCoreId > elem2->m_uiCoreId)
		return 1;
	else if(key->m_uiCoreId < elem2->m_uiCoreId)
		return -1;
	else
		return 0;
}
