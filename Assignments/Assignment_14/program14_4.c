/*
    Function Name   : CountFour
    Description     : Accept number from user and count frequency of digit 4.
    Input           : Integer iNo
    Output          : Count of digit 4
    Author          : Shweta Gogawale
    Date            : 23/11/2025
    Time Complexity : O(N)
                      
*/


#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}
