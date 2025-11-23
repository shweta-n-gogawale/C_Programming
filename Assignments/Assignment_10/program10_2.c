/*
  Function Name   : RectArea
  Description     : Accept width & height of rectangle and calculate its area.
  Input           : float fWidth, float fHeight
  Output          : double area value
  Author          : Shweta Gogawale
  Date            : 2025-11-23
  Time Complexity : O(1)
                 
*/

#include <stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %lf\n", dRet);

    return 0;
}
