/*
    Function Name   : CountDiff
    Description     : Accept number from user and return difference between 
                      summation of even digits and summation of odd digits.
    Input           : Integer iNo
    Output          : (Sum of even digits - Sum of odd digits)
    Author          : Shweta Gogawale
    Date            : 2025-11-23
    Time Complexity : O(N)
*/

#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0, iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iEvenSum += iDigit;
        }
        else
        {
            iOddSum += iDigit;
        }

        iNo = iNo / 10;
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d\n",iRet);

    return 0;
}
