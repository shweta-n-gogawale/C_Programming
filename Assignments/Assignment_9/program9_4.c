/*
  Function Name   : OddFactorial
  Description     : Calculate the odd factorial of a given number.
  Input           : int iNo
  Output          : Returns odd factorial
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(n/2)
                    (loop runs on odd numbers only)
*/

#include <stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;        // convert negative number to positive
    }

    for(int i = iNo; i >= 1; i--)
    {
        if(i % 2 != 0)     // only multiply odd numbers
        {
            iFact = iFact * i;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d", iRet);

    return 0;
}
