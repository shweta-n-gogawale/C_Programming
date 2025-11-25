/*
    Function Name   : Pattern
    Description     : Display alphabets from A to given number of times
    Input           : Integer
    Output          : Pattern of alphabets
    Author          : Shweta Gogawale
    Date            : 2025-11-24
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    char ch = 'A';

    for(i = 1; i <= iNo; i++)
    {
        printf("%c\t", ch);
        ch++;
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
