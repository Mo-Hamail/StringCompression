// CharMapings.h: interface for the CCharMapings class.
// 
/* class CCharMapings:

This class is responsible for holding the mapping character arrays between the character representationand the internal representation.
It contains two data members they are :
BYTE CharMapTable[46];
BYTE NoToCharTable[37];
Its constructor is responsible for filling these 2 arrays.
*/
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CHARMAPINGS_H__21A9C0BB_846D_4A1A_8ACD_81C9577314D4__INCLUDED_)
#define AFX_CHARMAPINGS_H__21A9C0BB_846D_4A1A_8ACD_81C9577314D4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CCharMapings  
{
public:
	BYTE CharMapTable[46];
	BYTE NoToCharTable[37];
	CCharMapings();
	virtual ~CCharMapings();

};

#endif // !defined(AFX_CHARMAPINGS_H__21A9C0BB_846D_4A1A_8ACD_81C9577314D4__INCLUDED_)
