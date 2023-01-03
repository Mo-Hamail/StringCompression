// CharMapings.cpp: implementation of the CCharMapings class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "WR.h"
#include "CharMapings.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CCharMapings::CCharMapings()
{
	CharMapTable[0] =	0; //0 s
	CharMapTable[1] =	1; //ء
	CharMapTable[2] =	2;// آ
	CharMapTable[3] =	3;// أ p
	CharMapTable[4] =	4;// ؤ
	CharMapTable[5] = 5;// إ
	CharMapTable[6] = 6;// ئ
	CharMapTable[7] = 7;// ا s p
	CharMapTable[8] = 8;// ب   p
	CharMapTable[9] = 9;// ة  s 
	CharMapTable[10] = 10;// ت s  p
	CharMapTable[11] = 11;// ث 
	CharMapTable[12] = 12;// ج
	CharMapTable[13] = 13;// ح 
	CharMapTable[14] = 14;// خ
	CharMapTable[15] = 15;// د
	CharMapTable[16] = 16;// ذ
	CharMapTable[17] = 17;// ر
	CharMapTable[18] = 18;// ز
	CharMapTable[19] = 19;// س  p
	CharMapTable[20] = 20;// ش
	CharMapTable[21] = 21;// ص 
	CharMapTable[22] = 22;// ض
	CharMapTable[23] = NULL;// **×
	CharMapTable[24] = 23;// ط
	CharMapTable[25] = 24;// ظ 
	CharMapTable[26] = 25;// ع
	CharMapTable[27] = 26;// غ
	CharMapTable[28] = NULL;// ** ـ
	CharMapTable[29] = 27;// ف p
	CharMapTable[30] = 28;// ق
	CharMapTable[31] = 29;// ك  s  p
	CharMapTable[32] = NULL;// **
	CharMapTable[33] = 30;// ل  p
	CharMapTable[34] = NULL;// **
	CharMapTable[35] = 31;// م  s
	CharMapTable[36] = 32;// ن  s p
	CharMapTable[37] = 33;// ه  s
	CharMapTable[38] = 34;// و  s p
	CharMapTable[39] = NULL;// **
	CharMapTable[40] = NULL;// **
	CharMapTable[41] = NULL;// **
	CharMapTable[42] = NULL;// **
	CharMapTable[43] = NULL;// **
	CharMapTable[44] = 35;// ى
	CharMapTable[45] = 36;// ي  s p
	////////////////////NULL;////////////
	NoToCharTable[0] = 46; // specially for the dot . بى.بى.سي	NoToCharTable[1] = 1;
	NoToCharTable[2] = 2;
	NoToCharTable[3] = 3;
	NoToCharTable[4] = 4;
	NoToCharTable[5] = 5;
	NoToCharTable[6] = 6;
	NoToCharTable[7] = 7;
	NoToCharTable[8] = 8;
	NoToCharTable[9] = 9;
	NoToCharTable[10] = 10;
	NoToCharTable[11] = 11;
	NoToCharTable[12] = 12;
	NoToCharTable[13] = 13;
	NoToCharTable[14] = 14;
	NoToCharTable[15] = 15;
	NoToCharTable[16] = 16;
	NoToCharTable[17] = 17;
	NoToCharTable[18] = 18;
	NoToCharTable[19] = 19;
	NoToCharTable[20] = 20;
	NoToCharTable[21] = 21;
	NoToCharTable[22] = 22;
	NoToCharTable[23] = 24;
	NoToCharTable[24] = 25;
	NoToCharTable[25] = 26;
	NoToCharTable[26] = 27;
	NoToCharTable[27] = 29;
	NoToCharTable[28] = 30;
	NoToCharTable[29] = 31;
	NoToCharTable[30] = 33;
	NoToCharTable[31] = 35;
	NoToCharTable[32] = 36;
	NoToCharTable[33] = 37;
	NoToCharTable[34] = 38;
	NoToCharTable[35] = 44;
	NoToCharTable[36] = 45;
	//NoToCharTable[37] = NULL;
}

CCharMapings::~CCharMapings()
{

}
