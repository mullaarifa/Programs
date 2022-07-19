//Write a program which accept string from user and display only digit from that string.
//Input: 	Marve89llous121
//OUTPUT:	89121
//INPUT:	Demo
//OUTPUT:	

#include<stdio.h>

void DisplayDigit(char *str)
{
	while(*str != '\0')
	{
		if((*str >= '0') && (*str <= '9'))
		{
			printf("%c",*str);
		}
		
		str++;
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	DisplayDigit(Arr);
	
	return 0;
}
