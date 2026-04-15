///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Accept number from user and return multiplication of all digits
//  Input :         2395
//  Output :        270
//  Author :        Diksha Anil Chavan
//  Date :          18/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int MultDigits(int iNo)
{
    int iMult = 1;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit; 
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d\n",iRet);

    return 0;
}