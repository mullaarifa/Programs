//Write a program which accept one number from user and toggle contents of first and last nibble of that number.
//Return modified number.

//INPUT:	4026531847
//OUTPUT:	8

#include<stdio.h>

typedef unsigned long int UINT;

UINT ToggleBit(int iNo)
{
	int iMask = 0XF000000F;
	long int iResult = 0;
	
	iResult = iNo ^ iMask;
	
	return iResult;
}

int main()
{
	int iValue = 0, iPos = 0;
	long int iRet = 0;
	
	printf("Enter The Number:\n");
	scanf("%d",&iValue);
	
	iRet = ToggleBit(iValue);
	
	printf("After toggling the first and last nibble the modified number is %ld\n",iRet);
	return 0;
}
