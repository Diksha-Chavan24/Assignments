///////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   program which accepts string from user and accept one character. Check whether that character is present in string or not   
//  Input :         Marvellous Multi OS
//                  e
//  Output :        TRUE
//  Input :         Marvellous Multi OS
//                  W
//  Output :        FALSE
//  Author :        Diksha Anil Chavan
//  Date :          12/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
    while(*str != '\0' )
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }   
    return FALSE;
}

int main()
{
    char Arr[20];
    char cValue;
    BOOL bRet = FALSE; 

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}