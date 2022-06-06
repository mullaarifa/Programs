//Problem Statment:
//Accept N number from user and return frequency of even numbers.
//Input:   N         6
//	   Elements  85 66 3 80 93 88
//Output:  	      3

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
	int iCnt = 0;
	int iCntEven = 0;
	
	for(iCnt = 0; iCnt<iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iCntEven++;
		}
	}
	return iCntEven;
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
	
	iRet = CountEven(ptr, iSize);
	
	printf("Result is %d\n",iRet);
	
	free(ptr);
	
	return 0;
	
}
