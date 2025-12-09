/*
    Function Name   : Display
    Description     : Accepts character from user and displays
                      its ASCII value in Decimal, Octal and Hexadecimal.
    Input           : Character ch
    Output          : ASCII values
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal\t\t%d\n", ch);
    printf("Octal\t\t%o\n", ch);
    printf("Hexadecimal\t%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
