///////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   program which accepts string from user and display it in reverse order  
//  Input :         MarvellouS
//  Output :        SuollevraM  
//  Author :        Diksha Anil Chavan
//  Date :          11/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Reverse(char *str)
{
    int iCount = 0, iCnt =0;

    while(*str != '\0' )
    {
        iCount++;
        str++;
    }

    str--;

    for(iCnt = iCount; iCnt > 0; iCnt--,str--)
    {
        printf("%c",*str);
    }
    printf("\n");
}

int main()
{
    char Arr[20];
    int bRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}