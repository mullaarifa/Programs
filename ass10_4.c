//Accept N number from user and accept range, Display all elements from that range.
//INPUT: 	N	6 
//		start 	60
//		End	90
//		ELEMENTS 85 65 3 76 93 88
//OUTPUT	66 76 88


#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iNo1, int iNo2)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iNo1 <= Arr[iCnt] && iNo2 >= Arr[iCnt])
		{
			printf("%d\n",Arr[iCnt]);
		}
	}
}

int main()
{
	int iSize = 0;
	int iCnt = 0;
	int *ptr = NULL;
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter Number of Element:\n");
	scanf("%d",&iSize);
	
	printf("Enter The Starting Point:\n");
	scanf("%d",&iValue1);
	
	printf("Enter The ending Point:\n");
	scanf("%d",&iValue2);
	
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
	
	Range(ptr, iSize, iValue1, iValue2);
	
	free(ptr);
	return 0;
}
