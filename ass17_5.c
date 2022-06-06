//Problem Statement
//Accept Number From User and Display Below PAttern.
//input row = 4 col = 4
/*
	1  2  3  4 
	   2  3  4
	      3  4
	         4  
*/

#include<stdio.h>

void Display(int iRow, int iColumn)
{
	int i = 0;
	int j = 0;
	
	if(iRow != iColumn)
	{
		return;
	}
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j<= iColumn; j++)
		{
			if(i <= j) 
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
