///////////////////////////////////////////////////////
//
//  File name :     program3.c
//  Descreption :   Accept number from user and return the count of digit between 3 and 7
//  Input :         2395
//  Output :        1
//  Author :        Diksha Anil Chavan
//  Date :          18/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int CountRange(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}