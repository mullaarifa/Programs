//Problem Statement:
//Accept N Number From user and return smallest number
//INPUT	N	6
//		Elements 85 66 3 96 85 93
//OUTPUT		93 

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[0] > Arr[iCnt])
		{
			Arr[0] = Arr[iCnt];
		} 
	}
	return Arr[0];
}

int main()
{
	int iSize = 0, iCnt = 0;
	int iRet = 0;
	int *ptr = NULL;
	
	printf("Enter The Elements:\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Unable to Allocate the memory\n");
		return -1;
	}
	
	printf("Enter %d Elements:\n",iSize);
	
	for(iCnt = 0; iCnt<iSize; iCnt++)
	{
		printf("Enter Element %d\n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet  = Minimum(ptr, iSize);
	
	printf("Smallest Number is: %d\n", iRet);
	
	free(ptr);
	return 0;
}
