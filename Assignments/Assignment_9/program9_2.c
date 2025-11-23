/*
  Function Name   : DollarToINR
  Description     : Convert the given USD amount to INR (1 USD = 70 INR).
  Input           : int iNo
  Output          : Returns INR value
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(1)
                    (simple multiplication only)
*/

#include <stdio.h>

int DollarToINR(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;   // convert negative to positive
    }

    return iNo * 70;  // 1 USD = 70 INR
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}
