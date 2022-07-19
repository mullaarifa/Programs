//Write a program which accept string from user and accept one character.
//and return index of last occurance of that character.
//INPUT:	Enter the character
//		l           
//		Enter The string
//		marvellous
//OUTPUT:	Character location is 6

//INPUT:	Enter the character
//		w           
//		Enter The string
//		Marvellous 
//OUTPUT:	-1

#include<stdio.h>

int LastChar(char *str, char cChar)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	
	for(int i = iCnt; iCnt >= 0; iCnt--)
	{
	
		if(*str == cChar)
		{
			break;
		}
		str--;
	}
	if(iCnt < 0)
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

	iRet = LastChar(Arr, cValue);
	
	printf("Character location is %d\n",iRet);
	
	return 0;
}
