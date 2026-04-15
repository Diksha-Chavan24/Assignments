///////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   Used to accept one number from user and print that number of * on screen
//  Author :        Diksha Anil Chavan
//  Date :          11/05/2025
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

    iCnt = 1;
    while(iNo >= iCnt)
    {
        printf("* ");
        iNo--;
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