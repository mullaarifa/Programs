/*
	Row 4  Column 4
	
	4  4  4  4
	3  3  3  3
	2  2  2  2
	1  1  1  1
	
*/

#include<stdio.h>

void Display(int iRow, int iColumn)
{
	int i = 0, j = 0;
	
	for(i = iRow; i >= 1; i--)
	{
		for(j = 1; j<=iColumn; j++)
		{
			printf("%d\t",i);
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
