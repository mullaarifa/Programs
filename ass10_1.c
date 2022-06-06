//Problem Statement
//Accept N number From user and accept another number as NO check whether NO is present or not.
//INPUT:	N	6
//		NO	66
//		ELEMENTS 85 66 3 66 80 93
//OUTPUT:	TRUE

//INPUT:	N 	6
//		NO	60
//		ELEMENTS 85 66 3 66 80 93
//		FALSE 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 0;iCnt<iLength;iCnt++)
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
	int iSize = 0, iCnt = 0, iValue = 0;
	bool bRet = 0;
	int *ptr = NULL;
	
	printf("How Many Elements You Want to store in Array:\n");
	scanf("%d",&iSize);
	
	printf("Enter The Number:\n");
	scanf("%d",&iValue);
	
	ptr = (int *)malloc(iSize*sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter The %d Elements\n",iSize);
	
	for(iCnt = 0; iCnt<iSize; iCnt++)
	{
		printf("Enter Element: %d\n",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	bRet = Check(ptr, iSize, iValue);
	
	if(bRet == true)
	{
		printf("%d is present\n",iValue);
	}
	else
	{
		printf("%d is not present\n",iValue);
	}
	return 0;
}
