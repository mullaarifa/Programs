//Write a program which accept number from user and return difference between summation of all its factors and Non Factors

#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0;
	int FactSum = 0;
	int FactNonSum = 0;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			FactSum = FactSum + iCnt;
		}
		else
		{
			FactNonSum = FactNonSum + iCnt;	
		}
	}
	return FactSum - FactNonSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	
	iRet = FactDiff(iValue);
	printf("Defference of Factors and Non-Factrs are:%d\n",iRet);
	
	return 0;
}
