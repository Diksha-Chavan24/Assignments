///////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   Accept file name from user and count number of small characters from that file  
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

int CountSmall(char FName[])
{
    int fd = 0, iCnt = 0, iSmallCount = 0, iRet = 0;
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
                if((Buffer[iCnt] >= 'a') && (Buffer[iCnt] <= 'z'))
                {
                    iSmallCount++;
                }
            }
            memset(Buffer,'\0',BUFFER_SIZE);    
        }
        
        close(fd);
    }
    return iSmallCount;
}

int main()      
{
    char FileName[30];
    int iRet = 0;

    printf("Enter the file name : \n");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of Small characters are %d",iRet);

    return 0;
}