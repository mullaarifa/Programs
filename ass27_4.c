//Write a program which accept string from user 
//and copy small characters of that string into another string.
//INPUT:	Enter String: Marvellous Multi OS
//OUTPUT:	arvellous multi

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'a') && (*src <= 'z') || (*src == ' '))
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
	
	StrCpySmall(Arr, Brr);
	
	printf("%s\n",Brr);
	return 0;
}
