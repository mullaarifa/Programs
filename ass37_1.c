//Write a recursive program which display below pattern.
//INPUT:	5
//OUTPUT:	*	*	*	*	*

#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 0;
	
	if(iCnt < iNo)
	{
		printf("*\t");
		iCnt++;
		Display(iNo);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	printf("\n");
	return 0;
}
