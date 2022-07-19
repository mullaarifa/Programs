//Accept Character from user and check whether it is Capital or not.
//(A-Z)
//INPUT: 	G
//OUTPUT:	TRUE	
//INPUT:	a
//OUTPUT: 	FALSE

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckCapital(char iChar)
{
	if((iChar >= 'A') && (iChar <= 'Z'))
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
	
	bRet = CheckCapital(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Chapital Character\n");
	}
	else
	{
		printf("It is not a Capital Character\n");
	}
	return 0;
}
