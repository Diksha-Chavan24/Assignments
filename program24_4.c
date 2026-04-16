///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   program which accepts string from user and check whether it contains vowels in it or not 
//  Input :         marvellous
//  Output :        TRUE
//  Input :         xyz
//  Output :        FALSE      
//  Author :        Diksha Anil Chavan
//  Date :          11/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    while(*str != '\0' )
    {
        str++;
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}