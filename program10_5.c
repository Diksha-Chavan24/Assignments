///////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   Accept number from user and return difference between summation of even digits and summation of odd digits
//  Input :         2395
//  Output :        -15
//  Author :        Diksha Anil Chavan
//  Date :          18/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iCnt = 0, iDigit = 0, iEven = 0, iOdd = 0, iDiff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }
              
        iNo = iNo / 10;
    }
    iDiff = iEven - iOdd;
    return iDiff;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}