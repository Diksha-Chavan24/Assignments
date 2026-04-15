///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   Used to find factorial of given number
//  Input :         5
//  Output :        120
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 1,iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}