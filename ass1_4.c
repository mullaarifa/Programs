//Accept One Number And Check Whether That Number Is Divisible By 5 or Not.

#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

bool Check(int iNo)
{
	if((iNo%5)==0)
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
	int iValue = 0;
	bool bRet =FALSE;
		
	printf("Enter The Number:\n");
	scanf("%d",&iValue);
	
	bRet=Check(iValue);
	
	if(bRet == TRUE)
	{
		printf("Number is divisible by 5\n");
	}
	else
	{
		printf("Number is not Divisible by 5\n");
	}
	return 0;
}
