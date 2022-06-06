//Problem Statement
//Accept Number From User and Display Below PAttern.
//input row = 5 col = 5
/*
	1  2  3  4  5
	1  2        5
	1     3     5
	1        4  5
	1  2  3  4  5
*/

#include<stdio.h>

void Display(int iRow, int iColumn)
{
	int i = 0;
	int j = 0;
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iColumn; j++)
		{
			if(i == 1 || i == iRow || j ==1 || j == iColumn || i == j)
			{
				printf("%d\t",j);
			}
			else
			{
				printf(" \t");
			}

		}
		printf("\n");
		
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Please Enter The Rows:\n");
	scanf("%d",&iValue1);

	printf("Please Enter The Columns:\n");
	scanf("%d",&iValue2);
	
	Display(iValue1, iValue2);
}
