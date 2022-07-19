//Write a recursive program which display below pattern.
//INPUT:	6
//OUTPUT:	a	b	c	d	e	f
#include<stdio.h>

void Display(int iNo)
{
	static char cCnt = 'a';
	
	if(iNo >= 1)
	{
		printf("%c\t",cCnt);
		cCnt++;
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
