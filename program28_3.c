///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   Accept file name from user and read all data from that file and display contents on screen  
//  Author :        Diksha Anil Chavan
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[50] = {'\0'};

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        printf("Display all data of file. \n");

        while((iRet = read(fd,Buffer,10)) != 0)
        {
            printf("%s",Buffer);
        }

        close(fd);
    }

    return 0;
}