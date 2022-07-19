//Write a recursive program which accept number from user and return its product of digits
//INPUT:	523
//OUTPU:	30

#include<stdio.h>

int Mult(int iNo)
{
	static int iMult = 1;
	
	if(iNo != 0)
	{
		iMult = iMult * (iNo%10);
		iNo = iNo / 10;
		Mult(iNo);
	}
	return iMult;
}

int main()
{
	int iValue = 0, iRet = 0;;
	
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	
	iRet = Mult(iValue);
	printf("Product of all digits are: %d\n", iRet);

	return 0;
}
