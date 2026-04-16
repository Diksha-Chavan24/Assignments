///////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   program which accepts string from user and copy the contents of that string into another string.
//                  If third parameter is greater than the size of source string then copy whole string into destination
//  Author :        Diksha Anil Chavan
//  Date :          20/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void StrNCpyX(char *src,char *dest,int iCnt)
{
    if(src == NULL)         //Filter
    {
        printf("Invalid Input");
    }

    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS"; 
    char Brr[30];

    StrNCpyX(Arr,Brr,10);

    printf("%s",Brr);

    return 0;
}