/*
  Function Name   : EvenFactorial
  Description     : Calculate the even factorial of a given number.
  Input           : int iNo
  Output          : Returns even factorial
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(n/2)
                    (loop runs on even numbers only)
*/

#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;        // convert negative number to positive
    }

    for(int i = iNo; i >= 2; i--)
    {
        if(i % 2 == 0)     // only multiply even numbers
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

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}
