//Write a program which accept string from user 
//and copy that characters of that string into anothrt string in reverse order.
//INPUT:	Enter String: Marvellous Python
//OUTPUT:	nohtyP suollevraM

#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
	char *start = src;
	char *end = src;
	char temp;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
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
	char Brr[20];
	
	printf("Enter String:\n");
	scanf("%[^'\n']s",Arr);
	
	StrCpyRev(Arr, Brr);
	
	printf("%s",Brr);
	
	return 0;
}
