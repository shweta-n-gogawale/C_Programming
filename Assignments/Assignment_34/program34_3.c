/*
    Function Name   : Display
    Description     : If input is capital, prints all characters from input to Z.
                      If input is small, prints all characters from input to a in reverse.
                      For all other characters, returns directly.
    Input           : Character ch
    Output          : Character sequence
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include<stdio.h>

void Display(char ch)
{
    int i = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c\t", i);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c\t", i);
        }
    }
    else
    {
        return;     // Invalid input (digit or symbol)
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
