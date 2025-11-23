/*
    Function Name   : MultDigits
    Description     : Accept number from user and return multiplication of all digits.
    Input           : Integer iNo
    Output          : Multiplication of digits
    Author          : Shweta Gogawale
    Date            : 2025-11-23
    Time Complexity : O(N)
*/

#include <stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0)     // Avoid multiplying by 0
        {
            iMult = iMult * iDigit;
        }

        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d\n",iRet);

    return 0;
}
