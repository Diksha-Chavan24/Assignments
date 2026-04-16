///////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   program which displays ASCII table.
//  Author :        Diksha Anil Chavan
//  Date :          11/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    char ch = '\0';

    printf("Enter character : \n");
    scanf("%c",&ch);

    printf("ASCII value of %c in Decimal is %d\n",ch,ch);
    printf("ASCII value of %c in Octal is %o\n",ch,ch);
    printf("ASCII value of %c in Hexadecimal is %x\n",ch,ch);

}

int main()
{
    DisplayASCII();

    return 0;
}