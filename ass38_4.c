//Write a recursive program which accept number from user and return its factorial
//INPUT:	5
//OUTPU:	120

#include<stdio.h>

int Fact(int iNo)
{
	static int iFact = 1;
	
	if(iNo != 0)
	{
		iFact = iFact * iNo;
		iNo--;
		Fact(iNo);
	}
	return iFact;
}

int main()
{
	int iValue = 0, iRet = 0;;
	
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	
	iRet = Fact(iValue);
	printf("Factorial is: %d\n", iRet);

	return 0;
}
