/*
  Function Name   : FhtoCs
  Description     : Convert temperature from Fahrenheit to Celsius.
  Input           : float fTemp
  Output          : double celsius value
  Author          : Shweta Gogawale
  Date            : 2025-11-23
  Time Complexity : O(1)
                  
*/

#include <stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %lf\n", dRet);

    return 0;
}
