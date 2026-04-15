///////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   Accept amount in US dollar and return its corresponding value in Indian currency
//  Input :         10
//  Output :        700
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iMulti = 0;

    iMulti = iNo * 70;

    return iMulti;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d ",iRet);

    return 0;
}