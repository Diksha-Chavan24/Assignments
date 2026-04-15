///////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   Accept number from user and count frequency of such a digits which are less than 6
//  Input :         2395
//  Output :        3
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int Count(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}