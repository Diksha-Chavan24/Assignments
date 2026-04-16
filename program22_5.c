///////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   Accept division of student from user and depends on the division display exam timing. (Application should be case insensitive)
//  Author :        Diksha Anil Chavan
//  Date :          11/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || chDiv == 'a') 
    {
        printf("Your exam at 7 AM");
    }
    else if((chDiv == 'B') || chDiv == 'b')
    {
        printf("Your exam at 8.30 AM");
    }
    else if((chDiv == 'C') || chDiv == 'c')
    {
        printf("Your exam at 9.20 AM");
    }
    else if((chDiv == 'D') || chDiv == 'd')
    {
        printf("Your exam at 10.30 AM");
    }
    else
    {
        printf("Invalid input\n");
    }

}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter your Division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}