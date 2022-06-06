#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

bool ChkVowel(char CValue)
{
	if(CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' ||CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U' )
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	char cValue = '\0';
	bool bRet = FALSE;
	
	printf("Enetr Character:\n");
	scanf("%c",&cValue);
	
	bRet = ChkVowel(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Vowel\n");
	}
	else
	{
		printf("It is not vowel\n");
	}
	return 0;
}
