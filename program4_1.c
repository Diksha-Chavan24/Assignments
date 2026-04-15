///////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   Used to accept number from user and display its multiplication of factors
//  Input :         12
//  Output :        144
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt= 0;
    int iFact = 1;

    if(iNo < 0)          //Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}