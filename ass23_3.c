//Accept Character from user. If it is capital then display all the character from input character till Z.
//If input character is small then print all the character in reverse order till a in other cases return directly.
//INPUT:	Enter Character: Q
//OUTPUT:			  Q
//				  R
//				  S
//				  T
//				  U
//				  V
//				  W
//				  X
//				  Y
//				  Z

//INPUT:	Enter Character: h
//OUTPUT			  h
//				  g
//				  f
//				  e
//				  d
//				  c
//				  b
//				  a

//INPUT:	Enter Character: 1
//OUTPUT:


#include<stdio.h>

void Display(char ch)
{	
	if(ch >= 'A' && ch <= 'Z')
	{
		while(ch <= 'Z')
		{
			printf("%c\n",ch);
			ch++;
		}
	}
	else if(ch >= 'a' && ch <= 'z')
	{
		while(ch >= 'a')
		{
			printf("%c\n",ch);
			ch--;
		}
	}
	else
	{
		return;
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
