///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Used to accept N from user and print all the odd numbers up to N
//  Input :         8
//  Output :        1 3 5 7
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        { 
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}