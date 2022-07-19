//Accept character from user. If char is small display its corresponding capital character,
//and if it is small then display its corresponding capital. If other display as it is.
//INPUT:	Q
//OUTPUT:	q
//INPUT:	m
//OUTPUT:	M
//INPUT:	4
//OUTPUT:	4  
//INPUT:	%
//OUTPUT:	%

#include<stdio.h>

void Display(char ch)
{	
	if(ch >= 'A' && ch <= 'Z')
	{
		ch = ch + 32;
		printf("%c\n",ch);
	}
	else if(ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32;
		printf("%c\n",ch);
	}
	else
	{
		printf("%c\n",ch);
	}
}

int main()
{
	char cValue = '\0';
	
	printf("Enter Character\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}
