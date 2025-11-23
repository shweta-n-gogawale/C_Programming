/*
    Function Name   : DisplayDigit
    Description     : Accept number from user and display its digits in reverse order.
    Input           : Integer iNo
    Output          : Digits in reverse order
    Author          : Shweta Gogawale
    Date            : 23/11/2025
    Time Complexity : O(N)
                     
*/


#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)     // Handling negative number
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}
