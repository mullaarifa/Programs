/*
	Row 4  Column 4
	
	A  B  C  D
	a  b  c  d
	A  B  C  D
	a  b  c  d
	
		
*/

#include<stdio.h>

void Display(int iRow, int iColumn)
{
	int i = 0, j = 0;
	char ch = '\0', ch1 = '\0';
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1, ch = 'A', ch1 = 'a'; j<=iColumn; j++,ch++,ch1++)
		{
			if(i%2 != 0)
			{
				printf("%c\t",ch);
			}
			else
			{
				printf("%c\t",ch1);
			}
		}
		printf("\n");
	} 
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter The Number Of Rows:\n");
	scanf("%d",&iValue1);
	
	printf("Eneter The Number Of Columns:\n");
	scanf("%d",&iValue2);
	
	Display(iValue1, iValue2);
	return 0;
}
