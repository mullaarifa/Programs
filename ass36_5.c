//Write a recursive program which display below pattern.
//OUTPUT:	a	b	c	d	e	f

#include<stdio.h>

void Display()
{
	static char cCnt = 'a';
	
	if(cCnt <= 'f')
	{
		printf("%c\t",cCnt);
		cCnt++;
		Display();
	}
}

int main()
{
	Display();
	printf("\n");
	return 0;
}
