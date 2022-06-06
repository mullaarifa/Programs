//Problem Statement:
//Accept Number of rows and columns From User And Display Below Pattern.
//Input	Row = 4   Column = 4
//OUTPUT	$  *  *  *
//		*  $  *  *
//		*  *  $  *
// 		*  *  *  $

#include<stdio.h>

void Display(int iRow, int iColumn)
{
	int i = 0, j = 0;
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iColumn; j++)
		{
			if(i == j)
			{
				printf("$\t");
			}
			else
			{
				printf("*\t");
			}
		}
		
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter The number of Row:\n");
	scanf("%d",&iValue1);
	
	printf("Enter The Number of Column:\n");
	scanf("%d",&iValue2);
	
	Display(iValue1, iValue2);
	
	return 0;
}
