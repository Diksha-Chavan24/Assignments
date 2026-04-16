///////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   Accept number of rows and number pf columns from user and display below pattern
//  Input :         4   3
//  Output :        * * * 
//                  * * * 
//                  * * * 
//                  * * * 
//  Author :        Diksha Anil Chavan
//  Date :          20/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1;j <= iCol; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and colums : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}