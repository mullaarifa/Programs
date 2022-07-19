//Write a program which accept string from user 
//and copy that characters of that string into anothrt string by removing all white spaces.
//INPUT:	Enter String: Mar vell ous Py thon   
//OUTPUT:	MarvellousPython

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
	while(*src != '\0')
	{
		if(*src == ' ')
		{
			src++;
		}
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	printf("Enter String:\n");
	scanf("%[^'\n']s",Arr);
	
	StrCpyX(Arr, Brr);
	
	printf("%s",Brr);
	
	return 0;
}
