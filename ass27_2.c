//Write a program which accept string from user 
//and copy the content of that string into another string.
//INPUT:	Enter string: Marvellous Multi OS
//				10
//OUTPUT:		      Marvellous

#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
	while((*src != '\0') && (iCnt != 0))
	{
		*dest = *src;
		src++;
		dest++;
		iCnt--;
	}
	*dest = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	StrNCpyX(Arr, Brr, 10);
	
	printf("%s",Brr);
	return 0;
}
