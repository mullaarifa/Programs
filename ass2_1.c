//Accept One Number From Use And Print Thant Number of * on Screen.

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt<=iNo; iCnt++)
	{
		printf("*\n");
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
