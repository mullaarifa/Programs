//Accept Character from user and check whether it is alphabate or not.
//(A-Z a-z)
//INPUT: 	G
//OUTPUT:	TRUE	
//INPUT:	@
//OUTPUT: 	FALSE

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckAlpha(char iChar)
{
	if((iChar >= 'A') && (iChar <= 'Z') || (iChar >= 'a') && (iChar <= 'z'))
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
	char cValue  = '\0';
	bool bRet = FALSE;
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	bRet = CheckAlpha(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Character\n");
	}
	else
	{
		printf("It is not a Character\n");
	}
	return 0;
}
