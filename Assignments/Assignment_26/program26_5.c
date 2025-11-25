/*
    Function Name   : Pattern
    Description     : Display first iNo even numbers
    Input           : Integer
    Output          : Even number pattern
    Author          : Shweta Gogawale
    Date            : 2025-11-24
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    int num = 2;

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t", num);
        num = num + 2;
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
