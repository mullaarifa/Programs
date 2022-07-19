//Write a program which accept string from user and accept one character.
//Check whether that character is present in string or not
//INPUT:	Enter the character
//		e           
//		Enter The string
//		Marvellous Multi os
//OUTPUT:	Character Found

//INPUT:	Enter the character
//		w           
//		Enter The string
//		Marvellous Multi os
//OUTPUT:	Character not Found

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkChar(char *str, char cChar)
{
	while(*str != '\0')
	{
		if(*str == cChar)
		{
			break;
		}
		str++;
	}
	if(*str == '\0')
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int main()
{
	char Arr[20];
	char cValue;
	bool bRet = FALSE;
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	printf("Enter The string\n");
	scanf("%s",Arr);
	
	bRet = ChkChar(Arr, cValue);
	
	if(bRet == TRUE)
	{
		printf("Character Found\n");
	}
	else
	{
		printf("Character not Found\n");
	}
	
	return 0;
}
