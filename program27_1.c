///////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   program which accepts string from user and copy the contents of that string into another string
//  Author :        Diksha Anil Chavan
//  Date :          20/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
    if(src == NULL)         //Filter
    {
        printf("Invalid Input");
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS"; 
    char Brr[30];

    StrCpyX(Arr,Brr);

    printf("%s",Brr);

    return 0;
}