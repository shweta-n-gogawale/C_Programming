/*
    Function Name   : Display
    Description     : Display small alphabets a to f using recursion.
    Input           : None
    Output          : a b c d e f
    Author          : Shweta Gogawale
    Date            : 10-01-2026
*/

#include<stdio.h>

void Display()
{
    static char ch = 'a';

    if(ch <= 'f')
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
