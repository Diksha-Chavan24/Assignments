///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   Used to find even factorial of given number
//  Input :         5
//  Output :        8 (4 * 2)
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}