//Write a recursive program which display below pattern.
//INPUT:	5
//OUTPUT:	1  2  3  4  5
#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 1;
	
	if(iCnt <= iNo)
	{
		printf("%d\t",iCnt);
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
