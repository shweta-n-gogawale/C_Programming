/*
  Function Name   : CircleArea
  Description     : Accept radius of circle from user and calculate its area.
  Input           : float fRadius
  Output          : double area value
  Author          : Shweta Gogawale
  Date            : 2025-11-23
  Time Complexity : O(1)

*/

#include <stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf\n", dRet);

    return 0;
}
