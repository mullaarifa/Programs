//Write an application which accept file name from user and open that file in read mode.
//INPUT:	Demo.txt
//OUTPUT:	File open successfully.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char fName[20];
	int fd = 0;
	
	printf("Enter the file name to open:\n");
	scanf("%s",fName);
	
	fd = open(fName, O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	printf("File Successfully open on read mode with FD %d:\n",fd);
	return 0;
}
