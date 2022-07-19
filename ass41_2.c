//Write a program which accept file from user and count number of small characters from that file.
//Input:	Demo.txt
//Output:	Number of small characters are: 22

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define FILESIZE 1024

int CountSmall(char FName[])
{
	char Data[FILESIZE];
	int fd = 0, i = 0, iCnt = 0, iRet = 0;
	
	fd = open(FName, O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open the file:\n");
		return -1;
	}
	
	printf("File open successfully:\n");
	
	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		for(i = 0; i < iRet; i++)
		{
			if((Data[i] >= 'a') && (Data[i] <= 'z'))
			{
				iCnt++;
			}
		}
	}
	close(fd);
	return iCnt;
}

int main()
{
	char fName[20];
	int iRet = 0;
	
	printf("Enter File name to open:\n");
	scanf("%s",fName);
	
	iRet = CountSmall(fName);
	
	printf("Number of small characters are: %d\n",iRet);

	return 0;
}
