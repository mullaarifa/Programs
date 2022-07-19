//Accept Character from user and check whether it is small case or not.
//(0-9)
//INPUT: 	4
//OUTPUT:	TRUE	
//INPUT:	b
//OUTPUT: 	FALSE

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckSmall(char iChar)
{
	if((iChar >= 'a') && (iChar <= 'z'))
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
	
	bRet = CheckSmall(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is small case character\n");
	}
	else
	{
		printf("It is not small case character\n");
	}
	return 0;
}
