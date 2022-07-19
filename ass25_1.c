//Write a program which accept string from user and convert it into lower case.
//Input: 	Marvellous Multi OS
//OUTPUT:	Modified String is: marvellous multi os

#include<stdio.h>

void StrlwrX(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	StrlwrX(Arr);
	
	printf("Modified String is: %s\n",Arr);
	return 0;
}
