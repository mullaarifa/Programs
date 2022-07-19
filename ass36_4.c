//Write a recursive program which display below pattern.
//OUTPUT:	A	B	C	D	E	F

#include<stdio.h>

void Display()
{
	static char cCnt = 'A';
	
	if(cCnt <= 'F')
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
