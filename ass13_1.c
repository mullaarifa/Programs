//INPUT:	iRow = 4	iColmun=4

//OUTPUT:	* * * *
//		* * * *
//		* * * *
//		* * * *

#include<stdio.h>

void Display(int iRow, int iColumn)
{
	int i = 0, j = 0;
	
	for(i = 1; i <= iRow; i++)
	{
		for(j=1; j <= iColumn; j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter The number of rows and columns:\n");
	scanf("%d %d",&iValue1, &iValue2);

	
	Display(iValue1, iValue2);
	return 0;
}
