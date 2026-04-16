///////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   program which accepts string from user and count number of small character  
//  Input :         Marvellous 
//  Output :        9     
//  Author :        Diksha Anil Chavan
//  Date :          11/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0' )
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("Number of Small characters are : %d",iRet);

    return 0;
}