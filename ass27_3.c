//Write a program which accept string from user 
//and copy capital characters of that string into another string.
//INPUT:	Enter String: Marvellous Multi OS
//OUTPUT:	MMOS

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*dest = *src;
			*dest++;
		}
		*src++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	StrCpyCap(Arr, Brr);
	
	printf("%s\n",Brr);
	return 0;
}
