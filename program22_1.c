///////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   Accept Character from user and check whether it is alphabet or not (A-Z a-z)
//  Author :        Diksha Anil Chavan
//  Date :          11/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }

    return 0;
}