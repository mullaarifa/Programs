//Accept  Number From User And Print first number in second number of times.

#include<stdio.h>

void Display(int iNo, int frequency)
{
	int iCnt = 0;
	
	for(iCnt =1; iCnt<=frequency; iCnt++)
	{
		printf("%d\t",iNo);
	}
}

int main()
{
	int iValue = 0;
	int iCount = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	printf("Enter Frequency\n");
	scanf("%d",&iCount);
	
	Display(iValue, iCount);
	
	return 0;
}
