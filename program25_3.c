///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   program which accepts string from user and toggle the case     
//  Input :         Marvellous Multi OS
//  Output :        mARVELLOUS mULTI os
//  Author :        Diksha Anil Chavan
//  Date :          12/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0' )
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
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

    strtogglex(Arr);

    printf("Modified string is : %s",Arr);

    return 0;
}