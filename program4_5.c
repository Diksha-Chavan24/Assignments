///////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   Used to accept number from user and return difference between summation of all its factors and non factors
//  Input :         12
//  Output :        -34
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;
    int iSum = 0;

    if(iNo < 0)          //Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    iSum = iFactSum - iNonFactSum;

    return iSum;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}