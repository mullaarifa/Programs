//Write a program which accept string from user 
//and copy that characters of that string into anothrt string By toggling the case cases.
//INPUT:	Enter String:MarVeLLouS156
//OUTPUT:		     mARvEllOUs156

#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*src = *src + 32;
			*dest = *src;
		}
		else if((*src >= 'a') && (*src <= 'z'))
		{
			*src = *src - 32;
			*dest = *src;
		}
		else if(*src >= '0' && *src <= '9')
		{
			*dest = *src;
		}
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
	
	StrCpyToggle(Arr, Brr);
	
	printf("%s",Brr);
	
	return 0;
}
