///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   program which accepts string from user and accept one character. return index of last occurrence of that character   
//  Input :         Marvellous Multi OS
//                  M
//  Output :        11
//  Input :         Marvellous Multi OS
//                  W
//  Output :        -1
//  Input :         Marvellous Multi OS
//                  e
//  Output :        4
//  Author :        Diksha Anil Chavan
//  Date :          15/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int LastChar(char *str,char ch)
{
    int iCount = 0;
    int iLastCount = 0;
    
    while(*str != '\0' )
    {
        if(*str == ch)
        {
            iLastCount = iCount;    
        }
        iCount++;
        str++;
    }   
    return iLastCount;
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

    iRet = LastChar(Arr,cValue);

    printf("Character location is %d",iRet);

    return 0;
}