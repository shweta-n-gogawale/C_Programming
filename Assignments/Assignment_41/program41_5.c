/*
    Function Name   : Mult
    Description     : Accept number and return product of its digits using recursion.
    Input           : Integer
    Output          : Integer
    Author          : Shweta Gogawale
    Date            : 10-01-2026
*/

#include<stdio.h>

int Mult(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }
    return (iNo % 10) * Mult(iNo / 10);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("%d\n", iRet);

    return 0;
}
