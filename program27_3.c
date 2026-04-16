///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   program which accepts string from user and copy capital character of that string into another string
//  Author :        Diksha Anil Chavan
//  Date :          20/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
    if(src == NULL)         //Filter
    {
        printf("Invalid Input");
    }

    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS"; 
    char Brr[30];

    StrCpyCap(Arr,Brr);

    printf("%s",Brr);

    return 0;
}