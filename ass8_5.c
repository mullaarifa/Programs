//Problem Statemnet:
//Accept N Numbers From User and and display all such elements which are multiples of 11.

//Input:   N    6
//Elements: 85 66 3 55 93 88
//Output:   66 55 88

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int iCnt = 0; 
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 11)==0)
		{
			printf("%d is Mulptiple of 11\n",Arr[iCnt]);
		}
	}
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
		printf("Enter The element %d:\n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	Display(ptr, iSize);
	
	free(ptr);
	
	return 0;
}
