///////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   Used to accept radius of circle from user and calculate its area
//  Input :         12
//  Output :        6 4 3 2 1
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)          //Updator
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo - 1) ; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d ",iCnt);
        }
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}