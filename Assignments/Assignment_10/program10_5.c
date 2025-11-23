/*
  Function Name   : SquareMeter
  Description     : Convert area from square feet to square meter.
  Input           : int iValue
  Output          : double area in square meter
  Author          : Shweta Gogawale
  Date            : 2025-11-23
  Time Complexity : O(1)
                   
*/

#include <stdio.h>

double SquareMeter(int iValue)
{
    double dArea = 0.0;

    dArea = iValue * 0.0929;

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf\n", dRet);

    return 0;
}
