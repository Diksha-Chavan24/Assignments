///////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   Accept character from user. If it is capital display its corresponding small. In other cases display as it is
//  Author :        Diksha Anil Chavan
//  Date :          11/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
        printf(" %c",ch);
    }

    else if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
        printf(" %c",ch);
    }

    else 
    {
        ch = ch + 0;
        printf(" %c",ch);
    }
    
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    Display(cValue);

    return 0;
}