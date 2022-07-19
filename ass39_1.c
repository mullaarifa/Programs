//Write a recursive program which accept string from user and count white spaces.
//INPUT:	HE llo WO rlD
//OUTPUT:	3

#include<stdio.h>

int WhiteSpace(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
		WhiteSpace(str);
	}
	return iCnt;
}

int main()
{
	char cString[30];
	int iRet = 0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",cString);
	
	iRet = WhiteSpace(cString);
	
	printf("Number of white spaces is %d\n",iRet);

	return 0;
}
