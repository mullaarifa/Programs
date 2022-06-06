//Accept number from user and check wether that number is even or odd

#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

bool ChkEven(int iNo)
{
	if((iNo%2)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue =0;
	bool bRet = FALSE;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	bRet = ChkEven(iValue);
	
	if(bRet == TRUE)
	{
		printf("%d is even number\n",iValue);
	}
	else
	{
		printf("%d is odd number\n",iValue);
	}
	return 0;
}
