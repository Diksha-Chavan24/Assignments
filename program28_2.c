///////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   Accept file name from user and create that file   
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
    
    printf("Enter the name of file : \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);
    
    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }

    printf("File created successfully\n");

    return 0;
}