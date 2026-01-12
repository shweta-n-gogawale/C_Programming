/*
    Function Name   : Display
    Description     : Display star pattern using recursion.
    Input           : Integer
    Output          : * * * * *
    Author          : Shweta Gogawale
    Date            : 10-01-2026
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("*\t");
        Display(iNo - 1);
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
