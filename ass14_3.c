/*
	Row 4  Column 3
	
	A  A  A  A
	B  B  B  B
	C  C  C  C
*/

#include<stdio.h>

void Display(int iRow, int iColumn)
{
	int i = 0, j = 0;
	char ch = '\0';
	
	for(i = 0,ch = 'A'; i <= iRow; i++,ch++)
	{
		for(j = 0; j<=iColumn; j++)
		{
			printf("%c\t",ch);
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
