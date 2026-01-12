/*
    Function Name   : Display
    Description     : Display numbers from 1 to 5 using recursion.
    Input           : None
    Output          : 1 2 3 4 5
    Author          : Shweta Gogawale
    Date            : 10-01-2026
*/

#include<stdio.h>

void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        printf("%d\t", i);
        i++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}
