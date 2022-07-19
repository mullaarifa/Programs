//Write a program which accept string from user and accept one character.
//and return frequency of that character.
//INPUT:	Enter the character
//		e           
//		Enter The string
//		Marvellous Multi os
//OUTPUT:	2

//INPUT:	Enter the character
//		w           
//		Enter The string
//		Marvellous Multi os
//OUTPUT:	0

#include<stdio.h>

int CountChar(char *str, char cChar)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == cChar)
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
	char cValue;
	int iRet = 0;
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	printf("Enter The string\n");
	scanf("%s",Arr);

	iRet = CountChar(Arr, cValue);
	
	printf("Character frequency is %d",iRet);
	
	return 0;
}
