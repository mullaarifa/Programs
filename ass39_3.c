//Write a recursive program which accept string from user and count number of small characters.
//INPUT:	HElloWOrlD
//OUTPUT:	5

#include<stdio.h>

int Small(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCnt++;
		}
		str++;
		Small(str);
	}
	return iCnt;
}

int main()
{
	char cString[30];
	int iRet = 0;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",cString);
	
	iRet = Small(cString);
	
	printf("Number of small characters in a string is: %d\n",iRet);

	return 0;
}
