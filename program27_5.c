///////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   program which accepts 2 strings from user and concat second string after first string
//  Author :        Diksha Anil Chavan
//  Date :          20/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void StrCatX(char *src,char *dest)
{
    if(src == NULL)         //Filter
    {
        printf("Invalid Input");
    }

    while(*src != '\0')
    {
        src++;
    }

    while (*dest != '\0')
    {
        *src = *dest;
        dest++;
        src++;
    }
    
    *dest = '\0';
    
}

int main()
{
    char Arr[50] = "Marvellous Infosystems "; 
    char Brr[30] = "Logic Building";

    StrCatX(Arr,Brr);

    printf("%s",Arr);

    return 0;
}