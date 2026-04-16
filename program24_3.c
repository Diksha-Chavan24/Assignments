///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   program which accepts string from user and return difference between frequency of small characters and frequency of capital characters    
//  Input :         MarvellouS 
//  Output :        6  (8-2)   
//  Author :        Diksha Anil Chavan
//  Date :          11/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0;
    int iCntCap = 0;
    int iCntSmall = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0' )
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCntCap++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCntSmall++;
        }
        str++;
    }

    iCnt = (iCntSmall - iCntCap);

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);

    return 0;
}