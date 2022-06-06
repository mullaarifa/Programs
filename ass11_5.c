//Problem Statement
//Accept N Numbers From USer And Display Summation of Digits of each number.

//INPUT	N	6
//		Elements 8225 665 3 76 953 858
//OUTPUT		  17   17 3  13 17 21

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
	int iCnt = 0;
	int iDigit = 0, iSum = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		iSum = 0;
		while(Arr[iCnt] != 0)
		{
			iDigit = Arr[iCnt] % 10;
			iSum = iSum + iDigit;
			Arr[iCnt] = Arr[iCnt]/10;
		}
		printf("%d\n",iSum);
	}
	
}

int main()
{

	int iSize = 0, iCnt = 0;
	int *ptr = NULL;
	
	printf("Enter The Number of Elemnts:\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Unable To Allocate The Memory\n");
		return -1;
	}
	
	printf("Enter The %d Elements:\n",iSize);
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter Elements %d\n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	Digits(ptr, iSize);
}
