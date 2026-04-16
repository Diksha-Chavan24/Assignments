///////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   Accept file name from user and one cont from user and read that number of characters from starting position  
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

void DisplayN(char FName[],int iSize)
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
                if((Buffer[iCnt] = '\0') && (iSize != 0))
                {
                    iCount++;
                }
            }
            memset(Buffer,'\0',BUFFER_SIZE);    
        }

        printf("%s",FName);
        
        close(fd);
    }
    return iCount;
}

int main()      
{
    char FileName[30];
    int iValue = 0;

    printf("Enter the file name : \n");
    scanf("%s",FileName);

    printf("Enter the number of character : ");
    scanf("%d",&iValue);

    DisplayN(FileName,iValue);

    return 0;
}