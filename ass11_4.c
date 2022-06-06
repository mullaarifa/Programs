//Problem Statement
//Accept N Numbers From user and display number which contains 3 digits in it

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
	int iCnt = 0;
	int iDigit = 0, iTemp = 0;
	int iDigitCounter = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		iDigitCounter = 0;
		
		iTemp = Arr[iCnt];
		
		while(Arr[iCnt] != 0)
		{
			iDigit = Arr[iCnt] % 10;
		
			Arr[iCnt] = Arr[iCnt]/10;
			
			iDigitCounter++;
		}
		
		Arr[iCnt] = iTemp;
		
		if(iDigitCounter == 3)
		{
	 		printf("3 Digit Number From Given Array : %d\n",Arr[iCnt]);
		}
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
