//Write a recursive program which display below pattern.
//INPUT:	5
//OUTPUT:	5  4  3  2  1
#include<stdio.h>

void Display(int iNo)
{
	//static int iCnt = iNo;
	
	if(iNo >= 1)
	{
		printf("%d\t",iNo);
		iNo--;
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
