//Write a program which accept one number and one position from user and check whether bit at that posision is on or off.
//If bit is ON return TRUE otherwise return FALSE.
//Return modified number.

//INPUT:	10	2
//OUTPUT:	TRUE

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(int iNo, int pos)
{
	int iMask = 0X00000001;
	int iResult = 0;
	
	iMask = iMask << (pos - 1);
	
	iResult = iNo & iMask;
	
	if(iResult == 0)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int main()
{
	int iValue = 0, iPos = 0;
	BOOL bRet = FALSE;
	
	printf("Enter The Number:\n");
	scanf("%d",&iValue);
	
	printf("Enter Position:\n");
	scanf("%d",&iPos);
	
	bRet = ChkBit(iValue, iPos);
	
	if(bRet == TRUE)
	{
		printf("Bit is On\n");
	}
	else
	{
		printf("Bit is OFF\n");
	}
	
	return 0;
}
