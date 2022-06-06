/*
	Row 4  Column 4
	
	1  2  3  4  
	5  6  7  8 
	9  10 11 12
*/

#include<stdio.h>

void Display(int iRow, int iColumn)
{
	int i = 0, j = 0;
	int iCnt = 0;
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iColumn; j++)
		{
			iCnt++;
			printf("%d\t",iCnt);
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
