///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Used to find odd factorial of given number
//  Input :         5
//  Output :        15 (5 * 3 * 1)
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if((iCnt % 2) != 0)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}