//Problem Statement:
//Accept Number of rows and columns From User And Display Bilow Pattern.
//Input	Row = 5   Column = 5
//OUTPUT	 1   2   3   4   5
//		-1  -2  -3  -4  -5
//		 1   2   3   4   5
//		-1  -2  -3  -4  -5
//		 1   2   3   4   5
	

#include<stdio.h>

void Display(int iRow, int iColumn)
{
	int i = 0, j = 0;
	int iCnt = 0;
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1, iCnt = -1; j <= iColumn; j++,iCnt--)
		{
			if(i % 2 == 0)
			{
				printf("%d\t",iCnt);
			}
			else	
				printf(" %d\t",j);
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
