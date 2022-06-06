//Problem Statement
//Accept N number From user and return product of all odd elements.
//INPUT:	N	6
//		ELEMENTS 15 66 3 70 10 88
//OUTPUT:	45

//INPUT:	N 	6
//		ELEMENTS 44 66 72 70 10 88
//		 	 0

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Range(int Arr[], int iLength)
{
	int iCnt = 0;
	int iMult = 1;
	
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt] %2) != 0)
		{
			iMult = iMult*Arr[iCnt];
		}
	}
	if(iMult == 1)
	{
		return 0;
	}
	else
	{
		return iMult;
	}
}

int main()
{
	int iSize = 0, iCnt = 0;
	int iRet = 0;
	int *ptr = NULL;
	
	printf("How Many Elements You Want to store in Array:\n");
	scanf("%d",&iSize);
	
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
	
	iRet = Range(ptr, iSize);
	
	printf("Product is: %d\n",iRet);
	
	free(ptr);
	
	return 0;
}
