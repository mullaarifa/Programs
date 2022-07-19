//Write a program which accept string from user 
//and copy the content of that string into another string.
//INPUT:	Enter string: Marvellous Multi OS
//OUTPUT:		      Marvellous Multi OS

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20];	//Empty String
	
	printf("Enter string:\n");
	scanf("%[^'\n']s",Arr);
	
	StrCpyX(Arr, Brr);
	
	printf("%s\n",Brr);
	return 0;
}
