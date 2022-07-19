//Write a recursive program which display below pattern.
//OUTPUT:	*	*	*	*	*

#include<stdio.h>

void Display()
{
	static int iCnt = 0;
	
	if(iCnt < 5)
	{
		printf("*\t");
		iCnt++;
		Display();
	}
}

int main()
{
	Display();
	printf("\n");
	return 0;
}
