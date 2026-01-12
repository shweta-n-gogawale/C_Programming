/*
    Function Name   : Display
    Description     : Display capital alphabets A to F using recursion.
    Input           : None
    Output          : A B C D E F
    Author          : Shweta Gogawale
    Date            : 10-01-2026
*/

#include<stdio.h>

void Display()
{
    static char ch = 'A';

    if(ch <= 'F')
    {
        printf("%c\t", ch);
        ch++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}
