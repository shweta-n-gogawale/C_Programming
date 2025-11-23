/*
    Function Name   : CountOdd
    Description     : Accept number from user and return the count of odd digits.
    Input           : Integer iNo
    Output          : Count of odd digits
    Author          : Shweta Gogawale
    Date            : 2025-11-23
    Time Complexity : O(N)
*/

#include <stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d\n",iRet);

    return 0;
}
