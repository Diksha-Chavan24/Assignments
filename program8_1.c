///////////////////////////////////////////////////////
//
//  File name :     program1.c
//  Descreption :   Used to accept radius of circle from user and calculate its area
//  Input :         5.3
//  Output :        88.2026
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    float PI = 3.14;

    dArea = PI * fRadius * fRadius;

    return dArea;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter number : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle : %2f",dRet);

    return 0;
}