//Accept One number from user and print that numer of * on screen

#include<stdio.h>

void Display(int iNo)
{
	while(iNo > 0)
	{
		printf("*\n");
		iNo--;
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
