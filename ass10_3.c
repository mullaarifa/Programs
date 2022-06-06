//Accept one number from user and accept one another number as NO, return index of last occurance of that number.
//INPUT: 	N	6 
//		NO 	66
//		ELEMENTS 85 65 3 66 93 88
//OUTPUT	3


#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;
	
	for(iCnt = iLength-1; iCnt>=0; iCnt--)
	{
		if(iNo == Arr[iCnt])
		{
			break;
		}
	}
	
	if(iCnt == iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}

int main()
{
	int iSize = 0;
	int iRet = 0;
	int iCnt = 0;
	int *ptr = NULL;
	int iValue = 0;
	
	printf("Enter Number of Element:\n");
	scanf("%d",&iSize);
	
	printf("Enter The Number:\n");
	scanf("%d",&iValue);
	
	ptr= (int *)malloc(iSize*sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Unable To Allocate The Memory\n");
		return -1;
	}
	
	printf("Enter %d Elements\n",iSize);
	
	for(iCnt = 0; iCnt<iSize; iCnt++)
	{
		printf("Enter Element %d:\n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = LastOcc(ptr, iSize, iValue);
	
	if(iRet == -1)
	{
		printf("There is no such element in array..\n");
	}
	else
	{
		printf("Last occurance of number at:%d\n ",iRet);
	}
	free(ptr);
	return 0;
}
