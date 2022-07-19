//Write a program which accept two string from user 
//and concatinate First string after second string.

//INPUT:	Enter First String: Marvellous Infosystems
//		Enter Second String: Logic Building.
//OUTPUT:	Marvellous Infosystems Logic Building.

#include<stdio.h>

void StrCatX(char *src, char *dest)
{
	while(*src != '\0')
	{
		*src++;
	}
	while(*dest != '\0')
	{
		*src = *dest;
		src++;
		dest++;
	}
	*src = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	printf("Enter First String\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter Second String\n");
	scanf("%[^'\n']s",Brr);
	
	StrCatX(Arr, Brr);
	
	printf("%s\n",Arr);
	return 0;
}
