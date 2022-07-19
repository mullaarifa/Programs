//Write a recursive program which accept number from user and return smallest digit.
//INPUT:	87983
//OUTPUT:	3

#include<stdio.h>

int Min(int iNo)
{
	static int iMin = 9;
	
	if(iNo != 0)
	{
		if(iMin > (iNo % 10))
		{
			iMin = iNo % 10;
		}
		iNo = iNo/10;
		Min(iNo);
	}
	return iMin;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet = Min(iValue);
	
	printf("Smallest digit in the number is: %d\n",iRet);

	return 0;
}
