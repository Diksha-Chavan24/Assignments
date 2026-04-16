///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   accept character from user and check whether it is special symbol or not
//  Author :        Diksha Anil Chavan
//  Date :          11/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
    {
        return false;
    }
    else
    {
        return true;
    }

}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is special Character");
    }
    else
    {
        printf("It is not special Character");
    }

    return 0;
}