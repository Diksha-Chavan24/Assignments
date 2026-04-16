///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   program which accepts string from user and copy small character of that string into another string
//  Author :        Diksha Anil Chavan
//  Date :          20/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void StrCpySmall(char *src,char *dest)
{
    if(src == NULL)         //Filter
    {
        printf("Invalid Input");
    }

    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
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
    char Arr[30] = "Marvellous multi OS"; 
    char Brr[30];

    StrCpySmall(Arr,Brr);

    printf("%s",Brr);

    return 0;
}