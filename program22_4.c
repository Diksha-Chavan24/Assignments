///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Accept Character from user and check whether it is small or not (a-z)
//  Author :        Diksha Anil Chavan
//  Date :          11/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if((ch >= 'a') && (ch <= 'z')) 
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

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case Character");
    }

    return 0;
}