//TC: O(1)
#include<stdio.h>

double FhtoCs(float fTemp)
{
    // Logic
    return (fTemp - 32) * (5.0/9.0);
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius is %lf\n",dRet);

    return 0;
}
