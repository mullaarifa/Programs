//Write an application which accept file name from user and Display size of file.
//INPUT:	Demo.txt
//OUTPUT:	File size is: 26.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int FileLength(char fName[])
{
	char Data[10];	
	int iRet = 0;
	int fd = 0;
	int iSum = 0;
	
	fd = open(fName,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open the file:\n");
		return -1;
	}
	
	printf("File is Successfully open with FD %d\n",fd);
	
	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		iSum = iSum + iRet;
	}
	
	close(fd);
	return iSum;

}

int main()
{
	char fName[20];
	int iRet = 0;
	
	printf("Enter File Name To Open:\n");
	scanf("%s",fName);
	
	iRet = FileLength(fName);
	
	printf("File size is :%d\n",iRet);
		
	return 0;
}
