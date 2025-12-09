/*
    Function Name   : DisplayASCII
    Description     : Displays ASCII table with Decimal, Hexadecimal, Octal and Character
                      representations for values 0 to 255.
    Input           : None
    Output          : ASCII Table
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("Dec\tHex\tOct\tChar\n");
    printf("-------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%X\t%o\t%c\n", i, i, i, i);
    }
}

int main()
{
    DisplayASCII();
    return 0;
}

