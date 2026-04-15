///////////////////////////////////////////////////////
//
//  File name :     program5.c
//  Descreption :   Used to accept N from user and print first 5 multiple of N
//  Input :         4
//  Output :        4 8 12 16 20
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMulti = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMulti = iCnt * iNo;
        printf("%d ",iMulti);
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}