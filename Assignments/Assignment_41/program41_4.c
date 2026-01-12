/*
    Function Name   : Fact
    Description     : Accept number and return factorial using recursion.
    Input           : Integer
    Output          : Integer
    Author          : Shweta Gogawale
    Date            : 10-01-2026
*/

#include<stdio.h>

int Fact(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }
    return iNo * Fact(iNo - 1);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = Fact(iValue);

    printf("%d\n", iRet);

    return 0;
}
