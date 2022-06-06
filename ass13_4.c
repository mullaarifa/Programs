//INPUT: 	Row 3  column  5
//		*  #  *  #  *
//		*  #  *  #  *
//		*  #  *  #  *


#include<stdio.h>

void Display(int iRow, int iColumn)
{
	int i = 0, j =0;
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 0; j < iColumn; j++)
		{
		    if(j % 2 == 0)
			printf("*\t");
		    
		    else
		    printf("#\t");
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter number of rows and coluns:\n");
	scanf("%d %d",&iValue1, &iValue2);
	
	Display(iValue1, iValue2);
	
	return 0;
}
