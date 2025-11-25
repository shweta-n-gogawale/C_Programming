/*
    Function Name   : Pattern
    Description     : Display '#' number '*' pattern
    Input           : Integer
    Output          : Pattern
    Author          : Shweta Gogawale
    Date            : 2025-11-24
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("#\t%d\t*\t", i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
