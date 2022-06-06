//Problem Statment:
//Accept N number from user and return difference between frequency of even numbers and odd numbers.
//Input:   N         7
//	   Elements  85 66 3 80 93 88 90
//Output:  	      1(4-3)

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	int iCnt = 0;
	int iCntEven = 0;
	int iCntOdd = 0;
	
	for(iCnt = 0; iCnt<iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iCntEven++;
		}
		else
		{
			iCntOdd++;
		}
	}
	return iCntEven - iCntOdd;
}

int main()
{
	int iSize = 0,iCnt = 0, iRet = 0;
	int *ptr = NULL;
	
	printf("Enter The Elements:\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize*sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter The %d elements\n",iSize);
	
	for(iCnt = 0; iCnt<iSize; iCnt++)
	{
		printf("Enter Elements %d:\n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Frequency(ptr, iSize);
	
	printf("Result is %d\n",iRet);
	
	free(ptr);
	
	return 0;
	
}
