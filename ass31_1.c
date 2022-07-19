//Write a program which accept one number from user and off 7th bit of that number if it is on.
//Return Modified Number.
//INPUT:	79
//OUTPUT:	15

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
