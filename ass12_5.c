//input 8
//output  2 4 6 8 10 12 14 16

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	while(iNo != 0)	//for(; iNo!= 0 ;iNo--)
	{	
		iCnt = iCnt + 2;
		printf("%d\t",iCnt);
		iNo--;
	}
}

int main()
{
	int iValue = 0;
	
	printf("Please Enter The Number:\n");
	scanf("%d",&iValue);
	
	Display(iValue);
}
