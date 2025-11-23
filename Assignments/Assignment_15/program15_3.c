/*
    Function Name   : CountRange
    Description     : Accept number from user and return the count of digits 
                      that are between 3 and 7.
    Input           : Integer iNo
    Output          : Count of digits in range
    Author          : Shweta Gogawale
    Date            : 2025-11-23
    Time Complexity : O(N)
*/

#include <stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > 3 && iDigit < 7)
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

    iRet = CountRange(iValue);

    printf("%d\n",iRet);

    return 0;
}
