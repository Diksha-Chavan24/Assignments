///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   Accept distance in kilometer and convert it into meter
//  Input :         5
//  Output :        5000
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int KMToMeter(int iNo)
{
    int iMulti = 0;

    iMulti = iNo * 1000;

    return iMulti;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in Meter is %d ",iRet);

    return 0;
}