///////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Descreption :   Used to accept width & height from user and calculate its area
//  Input :         5.3     9.78
//  Output :        51.834
//  Author :        Diksha Anil Chavan
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle : %2f",dRet);

    return 0;
}