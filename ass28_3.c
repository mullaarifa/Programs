//Write a program which accept string from user 
//and copy that characters of that string into anothrt string By Converting all small cases into capital cases.
//INPUT:	Enter String: Marvellous
//OUTPUT:		      MARVELLOUS

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'a') && (*src <= 'z'))
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
	
	StrCpyCap(Arr, Brr);
	
	printf("%s",Brr);
	
	return 0;
}
