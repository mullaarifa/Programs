//Problem Statment:
//Accept N number from user and return frequency of 11 from it.
//Input:   N         6
//	   Elements  85 66 3 15 93 88
//Output:  	      0

//Input:   N         6
//	   Elements  85 11 3 80 11 111
//Output:  	      2

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	int iCnt = 0;
	int iNo = 0;
	int FrequencyCnt =0;
	
	iNo = 11;
	
	for(iCnt = 0; iCnt<iLength; iCnt++)
	{
		if(iNo == Arr[iCnt])
		{
			FrequencyCnt++;
		}
	}
	return FrequencyCnt;
}

int main()
{
	int iSize = 0,iCnt = 0;
	int iRet = 0;
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
	
	iRet = Frequency(ptr, iSize);
	 
	printf("%d\n",iRet);
	
	free(ptr);
	
	return 0;
	
}
