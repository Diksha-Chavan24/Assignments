///////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   Accept number from user and check whether it contains 0 or not
//  Input :         2395
//  Output :        There is no zero
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return true;
        }

        iNo = iNo / 10;
    }
    return false;
}
int main()
{
    int iValue = 0;
    BOOL bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no zero");
    }
    return 0;
}