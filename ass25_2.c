//Write a program which accept string from user and convert it into upper case.
//Input: 	Marvellous Multi OS
//OUTPUT:	Modified String is: MARVELLOUS MULTI OS

#include<stdio.h>

void StruprX(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	StruprX(Arr);
	
	printf("Modified String is: %s\n",Arr);
	return 0;
}
