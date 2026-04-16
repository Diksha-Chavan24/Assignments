///////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   Accept file name from user and open that file in read mode   
//  Author :        Diksha Anil Chavan
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;     
    char Fname[20] = {'\0'};
    
    printf("Enter the name of file that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    
    if(fd == -1)
    {
        printf("Unable to OPEN file\n");
    }

    else
    {
        printf("File opened successfully\n");
        close(fd);
    }

    return 0;
}