///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   Accept number from user and count frequency of 2 in it
//  Input :         2395
//  Output :        1
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int CountTwo(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}