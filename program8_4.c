///////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Descreption :   Accept temperature in Fahrenheit and convert it into celsius
//  Input :         10
//  Output :        -12.2222
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCs = 0.0;

    dCs = (fTemp - 32) * (5.00 / 9.00);

    return dCs;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius : %f",dRet);

    return 0;
}