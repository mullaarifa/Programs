//Problem Statment:
//Accept N number from user and check whether that number contains 11 in it or not.
//Input:   N         6
//	   Elements  85 66 11 80 93 88
//Output:  	      11 is present.
//Input:   N         6
//	   Elements  85 66 3 80 93 88
//Output:  	      11 is not present.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
	int iCnt = 0;
	int iNo = 0;
	
	iNo = 11;
	
	for(iCnt = 0; iCnt<iLength; iCnt++)
	{
		if(iNo == Arr[iCnt])
		{
			break;
		}
	}
	
	if(iCnt == iLength)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int iSize = 0,iCnt = 0;
	bool bRet;
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
		printf("Enter Element %d:\n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	bRet = Check(ptr, iSize);
	
	if(bRet == true)
	{
		printf("11 is present:\n");
	}
	else
	{
		printf("11 is not present:\n");
	}
	
	free(ptr);
	
	return 0;
	
}
