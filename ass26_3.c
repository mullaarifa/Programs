//Write a program which accept string from user and accept one character.
//and return index of first occurance of that character.
//INPUT:	Enter the character
//		M           
//		Enter The string
//		Marvellous 
//OUTPUT:	0

//INPUT:	Enter the character
//		w           
//		Enter The string
//		Marvellous 
//OUTPUT:	-1

#include<stdio.h>

int FirstChar(char *str, char cChar)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == cChar)
		{
			break;
		}
		iCnt++;
		str++;
	}
	if(*str == '\0')
	{
		return -1;
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

	iRet = FirstChar(Arr, cValue);
	
	printf("Character location is %d\n",iRet);
	
	return 0;
}
