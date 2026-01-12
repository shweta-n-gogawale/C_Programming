/*
    Function Name   : Sum
    Description     : Accept number and return summation of its digits using recursion.
    Input           : Integer
    Output          : Integer
    Author          : Shweta Gogawale
    Date            : 10-01-2026
*/

#include<stdio.h>

int Sum(int iNo)
{
    if(iNo == 0)
    {
        return 0;
    }
    return (iNo % 10) + Sum(iNo / 10);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = Sum(iValue);

    printf("%d\n", iRet);

    return 0;
}
