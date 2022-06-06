//Problem Statemnet:
//Accept N Numbers from user and Display All Such a elements which are divisible by 5

//Input:   N    6
//Elements: 85 65 3 80 93 88
//Output:   85   80

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 5) == 0)
		{
			printf("%d is Divisible by 5\n",Arr[iCnt]);
		}
	}
}

int main()
{
	int *ptr = NULL;
	int iCnt = 0;
	int iSize = 0;
	
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
	
	Display(ptr, iSize);
	
	free(ptr);
	
	return 0;
}
