/*
  Function Name   : DiffFactorial
  Description     : Calculate difference between even factorial and odd factorial of a number.
  Input           : int iNo
  Output          : int (EvenFact - OddFact)
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(n)
                    (calculates even and odd factorial in same single loop)
*/

#include <stdio.h>

int DiffFactorial(int iNo)
{
    int i = 0;
    int iEvenFact = 1;
    int iOddFact  = 1;

    if(iNo < 0)
    {
        iNo = -iNo;      // convert negative to positive
    }

    for(i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
        {
            iEvenFact = iEvenFact * i;
        }
        else
        {
            iOddFact = iOddFact * i;
        }
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = DiffFactorial(iValue);

    printf("Differential Factorial is %d", iRet);

    return 0;
}
