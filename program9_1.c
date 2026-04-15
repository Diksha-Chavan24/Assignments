///////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   Accept number from user and display its digit in reverse order
//  Input :         2395
//  Output :        5
//                  9
//                  3
//                  2
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0, iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        iRev = iRev * 10 + iDigit;

        iNo = iNo / 10;
        printf("%d\n",iDigit);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}