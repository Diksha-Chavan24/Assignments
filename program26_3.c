///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   program which accepts string from user and accept one character. return index of first occurrence of that character   
//  Input :         Marvellous Multi OS
//                  M
//  Output :        0
//  Input :         Marvellous Multi OS
//                  W
//  Output :        -1
//  Input :         Marvellous Multi OS
//                  e
//  Output :        4
//  Author :        Diksha Anil Chavan
//  Date :          12/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int FirstChar(char *str,char ch)
{
    int iCount = 0;

    while(*str != '\0' )
    {
        if(*str == ch)
        {
            return iCount;    
        }
        iCount++;
        str++;
    }   
    return -1;
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

    iRet = FirstChar(Arr,cValue);

    printf("Character location is %d",iRet);

    return 0;
}