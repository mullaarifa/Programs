//Write a program which accept one number from user and on its first 4 bits.
//Return Modified Number.
//INPUT:	73
//OUTPUT:	79

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT no)
{
	int iMask = 0X00000240;
	int iResult = 0;
	
	iResult = no ^ iMask;
	
	return iResult;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	
	iRet = OffBit(iValue);
	
	printf("%d\n",iRet);
	
	return 0;
}
