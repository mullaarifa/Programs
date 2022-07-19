//Write a program which accept string from user and toggle case.
//Input: 	Marvellous Multi OS
//OUTPUT:	Modified String is: mARVELLOUS mULTI os

#include<stdio.h>

void StrtoggleX(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		else if((*str >= 'A') && (*str <= 'Z'))
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
	
	StrtoggleX(Arr);
	
	printf("Modified String is: %s\n",Arr);
	return 0;
}
