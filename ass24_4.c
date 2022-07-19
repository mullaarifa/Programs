#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkVowel(char *str)
{
	while(*str != '\0')
	{
		if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || (*str == 'a') || (*str == 'e') || 			(*str == 'i') || (*str == 'o') || (*str == 'u'))
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
	bool bRet = FALSE;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	bRet = ChkVowel(Arr);
	
	if(bRet == TRUE)
	{
		printf("String contains Vowel\n");
	}
	else
	{
		printf("String is not contain Vowel\n");
	}
	return 0;
}
