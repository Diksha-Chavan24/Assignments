///////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   program which accepts string from user and convert it into upper case     
//  Input :         Marvellous Multi OS
//  Output :        MARVELLOUS MULTI OS 
//  Author :        Diksha Anil Chavan
//  Date :          12/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0' )
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);

    printf("Modified string is : %s",Arr);

    return 0;
}