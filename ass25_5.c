//Write a program which accept string from user and count white spaces.
//Input: 	Marvellous Multi OS
//OUTPUT:	Modified String is:  2 

//INPUT:	Marvellous
//OUTPUT:	0

//INPUT:	Arifa Azhar Patel .
//OUTPUT:	3

#include<stdio.h>

int CountWhite(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == ' ') 
		{
			iCnt++;	
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountWhite(Arr);
	
	printf("%d\n",iRet);
	
	
	return 0;
}
