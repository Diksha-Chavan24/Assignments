///////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   program which accepts string from user and accept one character. return frequency of that character   
//  Input :         Marvellous Multi OS
//                  M
//  Output :        2
//  Input :         Marvellous Multi OS
//                  W
//  Output :        0
//  Author :        Diksha Anil Chavan
//  Date :          12/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int CountChar(char *str,char ch)
{
    int iCount = 0;

    while(*str != '\0' )
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }   
    return iCount;
}

int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0; 

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("Character frequency is %d",iRet);

    return 0;
}