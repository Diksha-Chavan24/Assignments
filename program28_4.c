///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Accept file name from user and display size of file  
//  Author :        Diksha Anil Chavan
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[] = {'\0'};

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);        

    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        iRet = write(fd,Buffer,strlen(Buffer));

        printf("File size is %d bytes \n",iRet);

        close(fd);
    }

    return 0;
}
//not working