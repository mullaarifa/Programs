//Write a program which accept one number and one position from user and off that bit.
//Return modified number.

//INPUT:	10	2
//OUTPUT:	8


#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(int iNo, int iPos)
{
	int iMask = 0X00000001;
	int iResult = 0;
	
	iMask = iMask << (iPos - 1);
	
	iResult = iNo ^ iMask;
	
	return iResult;
}

int main()
{
	int iValue = 0, iPos = 0;
	int iRet = 0;
	
	printf("Enter The Number:\n");
	scanf("%d",&iValue);
	
	printf("Enter Position:\n");
	scanf("%d",&iPos);
	
	iRet = OffBit(iValue, iPos);
	
	printf("After Disabling Bit %d the new modified number is %d\n",iPos, iRet);
	return 0;
}
