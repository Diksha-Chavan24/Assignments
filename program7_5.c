///////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   Used to return difference between Even factorial and odd factorial of given number
//  Input :         5
//  Output :        -7 (8 - 15)
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iFact = 0, iFact1 = 1, iFact2 = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if((iCnt % 2) == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else 
        {
            iFact2 = iFact2 * iCnt;
        }
    }
    iFact = iFact1 - iFact2;
    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}