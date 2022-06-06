//Problem Statement:
//Accept Number of rows and columns From User And Display Bilow Pattern.
//Input	Row = 4   Column = 4
//OUTPUT	2  4  6  8
//		1  3  5  7  
//		2  4  6  8
// 		1  3  5  7


#include<stdio.h>

void Display(int iRow, int iColumn)
{
	int i = 0, j = 0;
	int iCnt = 0, iEven = 0, iOdd = 0;
	
	for(i = 0; i < iRow; i++)
	{
		iEven = 0;
		iOdd = -1;
		for(j = 1; j <= iColumn; j++)
		{
			if(i % 2 ==0)
			{
			       iEven = iEven+2;
				printf("%d\t",iEven);
			}
			else
			{
			       iOdd = iOdd+2;
				printf("%d\t",iOdd);
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
