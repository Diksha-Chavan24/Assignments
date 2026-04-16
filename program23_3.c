///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   Accept character from user. if it is capital them display all the character from the input till Z.If input character is small thn print all the characters in reverse order till a. In other cases return directly.
//  Author :        Diksha Anil Chavan
//  Date :          11/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    char chr = '\0';
    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(chr = ch; chr <= 'Z'; chr++)
        {
            printf("%c\t",chr);
        }
    }

    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(chr = ch; chr >= 'a'; chr--)
        {
            printf("%c\t",chr);
        }
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