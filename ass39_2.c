//Write a recursive program which accept number from user and return largest digit.
//INPUT:	87983
//OUTPUT:	9

#include<stdio.h>

int Max(int iNo)
{
	static int iMax = 0;
	
	if(iNo != 0)
	{
		if(iMax < (iNo % 10))
		{
			iMax = iNo % 10;
		}
		iNo = iNo/10;
		Max(iNo);
	}
	return iMax;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet = Max(iValue);
	
	printf("largest digit in the number is: %d\n",iRet);

	return 0;
}
