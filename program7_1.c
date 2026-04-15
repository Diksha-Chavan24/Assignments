///////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   Used to accept number from user and display below pattern
//  Input :         5
//  Output :        * * * * * # # # # #
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ",iCnt);
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" # ",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}