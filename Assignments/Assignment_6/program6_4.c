/*
  Function Name   : Multiply
  Description     : Accept three integers and return their multiplication.
  Input           : int a, int b, int c
  Output          : Multiplication result (int)
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(1)
*/

#include <stdio.h>

int Multiply(int a, int b, int c)
{
    return a * b * c;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d\n", iRet);

    return 0;
}
