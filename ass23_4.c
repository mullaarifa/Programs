//Accept character from user and check whther it is special symbol or not.
//INPUT:	Enter Character: @
//OUTPUT:			  @ is special symbol

//INPUT: 	Enter Character: 1
//OUTPUT:			  1 is not special symbol

//INPUT:	Enter Character: w
//OUTPUT:			  w is not special symbol

//INPUT:	Enter Character: #
//OUTPUT:			  # is special symbol

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
	if((ch >= 32 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char cValue = '\0';
	bool bRet = false;
	
	printf("Enter Character:\n");
	scanf("%c",&cValue);
	
	bRet = ChkSpecial(cValue);
	
	if(bRet == true)
	{
		printf("%c is special symbol\n",cValue);
	}
	else
	{
		printf("%c is not special symbol\n",cValue);
	}
	return 0;
}
