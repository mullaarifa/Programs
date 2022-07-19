#include<stdio.h>
//#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;


#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
	int iMask = 0X00040020;
	int iResult = 0;
	
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
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	
	bRet = ChkBit(iValue);
	
	if(bRet ==  TRUE)
	{
		printf("Bit is ON");
	}
	else
	{
		printf("Bit is OFF");
	}
	return 0;
}
