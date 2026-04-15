///////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   used to accept one number from user and print that number of even numbers on screen
//  Author :        Diksha Anil Chavan
//  Date :          11/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>

void PrintEven(int iNo)
{

    int iCnt = 0;
    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= (2 * iNo); iCnt++ )
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}