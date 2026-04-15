///////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   Used to accept number from user and display its table in reverse order
//  Input :         2
//  Output :        20 18 16 14 12 10 8 6 4 2
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 1,iTable = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    TableRev(iValue);

    return 0;
}