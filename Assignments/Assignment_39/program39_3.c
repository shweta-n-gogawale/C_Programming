/*
    Function Name   : Display
    Description     : Display numbers from 5 to 1 using recursion.
    Input           : None
    Output          : 5 4 3 2 1
    Author          : Shweta Gogawale
    Date            : 10-01-2026
*/

#include<stdio.h>

void Display()
{
    static int i = 5;

    if(i >= 1)
    {
        printf("%d\t", i);
        i--;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}
