//Accept One Number and print that number of times * in Screen

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt<=iNo; iCnt++)
	{
		printf("*\t");
	}
}

int main()
{
	int iValue = 0;
	iValue = 5;
	
	Display(iValue);
	printf("\n");
	
	return 0;
}
