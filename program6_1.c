///////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   Used to accept number from user and if number is less than 50 then print small, if it is greater than 50 and less than 100 then print medium, if it is greater than 100 print large
//  Input :         12
//  Output :        small
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small\n");
    }
    else if((iNo > 50) && (iNo <= 100))
    {
        printf("Medium\n");
    }
    else 
    {
        printf("Large\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}