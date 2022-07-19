//Write a program which accept String from user and rerurn difference between small characters,
//and frequency of Capital Characters.

//INPUT:	MarvellouS
//OUTPUT:	(8-2) :6


#include<stdio.h>

int Difference(char *str)
{
	int iCnt = 0, iCnt1 = 0;
	int iDiff = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCnt++;
		}
		else if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt1++;
		}
		str++;
	}
	iDiff = iCnt - iCnt1;
	
	return iDiff;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = Difference(Arr);
	
	printf("Difference between capital and small characters are:%d\n",iRet);
	return 0;
}
