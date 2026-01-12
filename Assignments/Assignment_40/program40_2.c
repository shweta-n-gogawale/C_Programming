/*
    Function Name   : Display
    Description     : Display numbers from 1 to N using recursion.
    Input           : Integer
    Output          : 1 2 3 4 5
    Author          : Shweta Gogawale
    Date            : 10-01-2026
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        Display(iNo - 1);
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
