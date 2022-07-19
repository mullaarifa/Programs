//Write a program which accept one number from user and toggle 7th bit of that number.
//Return Modified Number.
//INPUT:	137
//OUTPUT:	201

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT no)
{
	int iMask = 0X00000040;
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
