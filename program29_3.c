///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   Accept file name from user and count number of white spaces from that file  
//  Author :        Diksha Anil Chavan
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CountWhite(char FName[])
{
    int fd = 0, iCnt = 0, iWhiteCount = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName, O_RDONLY);      

    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if(Buffer[iCnt] == ' ')
                {
                    iWhiteCount++;
                }
            }
            memset(Buffer,'\0',BUFFER_SIZE);    
        }
        
        close(fd);
    }
    return iWhiteCount;
}

int main()      
{
    char FileName[30];
    int iRet = 0;

    printf("Enter the file name : \n");
    scanf("%s",FileName);

    iRet = CountWhite(FileName);

    printf("Number of white spaces are %d",iRet);

    return 0;
}