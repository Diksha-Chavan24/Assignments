///////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   Accept area in square feet and convert it into square meter
//  Input :         5
//  Output :        0.464515
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iNo)
{
    double dMulti = 0;

    dMulti = iNo * 0.0929;

    return dMulti;
}
int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Squaremeter is %2f",dRet);

    return 0;
}