//Write a program which accept string from user 
//and copy that characters of that string into anothrt string By Converting all capital cases into small cases.
//INPUT:	Enter String: MARVELLOUS
//OUTPUT:		      Marvellous

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*src = *src + 32;
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
	
	StrCpySmall(Arr, Brr);
	
	printf("%s",Brr);
	
	return 0;
}
