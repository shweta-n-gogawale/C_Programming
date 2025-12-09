/*
    Function Name   : Display
    Description     : Converts an alphabet from small to capital or from capital to small.
                      If not alphabet, displays the character as it is.
    Input           : Character ch
    Output          : Converted Character
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')          // Capital → Small
    {
        printf("%c", ch + 32);
    }
    else if(ch >= 'a' && ch <= 'z')     // Small → Capital
    {
        printf("%c", ch - 32);
    }
    else
    {
        printf("%c", ch);               // Other characters remain same
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
