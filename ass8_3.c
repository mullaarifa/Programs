//Problem Statemnet:
//Accept N Numbers From User and and display all such elements which are even and divisible by 5

//Input:   N    6
//Elements: 85 65 3 80 93 88
//Output:   80

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int iCnt = 0; 
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0 && ((Arr[iCnt] % 5)==0)) 
		{
			printf("%d is even number and Divisible by 5\n",Arr[iCnt]);
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
