//Accept Character from user and check whether it is Digit or not.
//(0-9)
//INPUT: 	4
//OUTPUT:	TRUE	
//INPUT:	b
//OUTPUT: 	FALSE

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckDigit(char iChar)
{
	if((iChar >= '0') && (iChar <= '9'))
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
	
	bRet = CheckDigit(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Digit\n");
	}
	else
	{
		printf("It is not Digit\n");
	}
	return 0;
}
