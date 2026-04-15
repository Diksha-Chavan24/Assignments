///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Accept number from user and count frequency of 4 in it
//  Input :         2445
//  Output :        2
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int CountFour(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCnt++;
        }        
        iNo = iNo / 10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}