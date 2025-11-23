/*
  Function Name   : Factorial
  Description     : Accept number and return its factorial.
  Input           : int iNo
  Output          : int (factorial)
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(n)
*/

#include <stdio.h>

int Factorial(int iNo)
{
    int i = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}
