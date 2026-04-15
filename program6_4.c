///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Used to accept number from user and display its table
//  Input :         2
//  Output :        2 4 6 8 10 12 14 16 18 20
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 1,iTable = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iTable = iNo * iCnt;
        printf("%d ",iTable);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}