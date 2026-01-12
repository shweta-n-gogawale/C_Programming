/*
    Function Name   : Display
    Description     : Display numbers from N to 1 using recursion.
    Input           : Integer
    Output          : 5 4 3 2 1
    Author          : Shweta Gogawale
    Date            : 10-01-2026
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("%d\t", iNo);
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
