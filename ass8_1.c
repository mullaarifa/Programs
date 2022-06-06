//Problem Statemnet:
//Accept N Numbers From User and Return Defference Between Summetion of even elements and Summetion of Odd Elements.

//Input:   N    6
//Elements: 85 65 3 80 93 88
//Output:   53  (234-181)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
	int iCnt = 0, iSumEven = 0, iSumOdd = 0;
	int iDiff = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iSumEven = iSumEven+Arr[iCnt];
		}
		else
		{
			iSumOdd = iSumOdd + Arr[iCnt];
		}
	}
	iDiff = iSumEven - iSumOdd;
	
	return iDiff;
}

int main()
{
	int *ptr = NULL;
	int iCnt = 0;
	int iSize = 0, iRet = 0;
	
	printf("Enter Number Of Elements:\n");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(iSize*sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Unable To Allocate the Memory:\n");
		return -1;
	}
	
	printf("Enter %d Elements:\n",iSize);
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("Enter The elements %d:\n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Difference(ptr, iSize);
	
	printf("Difference between Summetion of even and summention of odd numbers are:%d\n",iRet);
	
	free(ptr);
	
	return 0;
}
