///////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   program which accepts string from user reverse that string in place 
//  Input :         abcd
//  Output :        dcba
//  Author :        Diksha Anil Chavan
//  Date :          15/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void StrRevX(char *str)
{
    int iCount = 0,iCnt = 0;
    
    while(*str != '\0' )
    {
        iCount++;
        str++;
    } 
    
    str--;

    for(iCnt = iCount; iCnt > 0; str--,iCnt--)
    {
        printf("%c",*str);
    }
    printf("\n");
}

int main()
{
    char Arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    return 0;
}