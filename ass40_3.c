//Write an application which accept file name from user and read all data from that file
//and Display contents on screen.
//INPUT:	Demo.txt
//OUTPUT:	Display all data of file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

int main()
{
	char fName[20];
	char Data[100];
	int iRet = 0;
	int fd = 0;	
	
	printf("Enter File Name To Open:\n");
	scanf("%s",fName);
	
	fd = open(fName,O_RDWR | O_APPEND);
	if(fd == -1)
	{
		printf("Unable to open the file:\n");
		return -1;	
	}
	
	printf("File is Successfully open with FD %d\n",fd);
	
	iRet = read(fd,Data,30);
	
	printf("%d bytes gets successfully read from the file\n",iRet);
	
	printf("Data from file is:\n");
	write(1,Data,iRet);
	
	return 0;
}
