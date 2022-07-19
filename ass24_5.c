//Write a prgram which accept String from user and Display it in reverse order.
//Input: 	MarvellouS
//OUTPUT:	String After Reverse: SuollevraM


#include<stdio.h>

void Reverse(char *str)
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
	
	Reverse(Arr);	//Display(100)

	printf("String After Reverse:%s\n",Arr);
	return 0; 
}
