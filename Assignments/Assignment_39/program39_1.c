/*
    Function Name   : Display
    Description     : Display 5 stars using recursion.
    Input           : None
    Output          : * * * * *
    Author          : Shweta Gogawale
    Date            : 10-01-2026
*/

#include<stdio.h>

void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        printf("*\t");
        i++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}
