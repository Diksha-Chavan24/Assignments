///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   program which accepts string from user and display only digits from that string     
//  Input :         Marve89llous121 
//  Output :        89121
//  Author :        Diksha Anil Chavan
//  Date :          12/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0' )
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}