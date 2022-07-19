//write a program which accept String from user and reverse that string in place.
//Input:	Enter String: abcd
//OUTPUT:	String After Reverse: dcba

//input:	Enter String: ABBA
//OUTPUT:	String After Reverse: ABBA

#include<stdio.h>

void StrrevX(char *str)
{	
	char *start = str;
	char *end = str;
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
}


int main()
{
	char Arr[20];
	
	printf("Enter String:\n");
	scanf("%[^'\n']s",Arr);
	
	StrrevX(Arr);	
	printf("String After Reverse:%s\n",Arr);
	return 0; 
}
