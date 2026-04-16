///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Accept file name from user and one character from user and count number of occurrences of that character from that file  
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

int CountChar(char FName[],char ch)
{
    int fd = 0, iCnt = 0, iCount = 0, iRet = 0;
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
                if(Buffer[iCnt] == ch)
                {
                    iCount++;
                }
            }
            memset(Buffer,'\0',BUFFER_SIZE);    
        }
        
        close(fd);
    }
    return iCount;
}

int main()      
{
    char FileName[30];
    int iRet = 0;
    char cValue = 0;

    printf("Enter the file name : \n");
    scanf("%s",FileName);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);

    printf("Frequency is %d",iRet);

    return 0;
}