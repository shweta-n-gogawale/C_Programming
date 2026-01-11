/*
    Function Name   : StrCpyX
    Description     : Copy string into another string by removing white spaces.
    Input           : char *, char *
    Output          : Copied string
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvel lous Pyth on";
    char brr[30];

    StrCpyX(arr, brr);

    printf("%s\n", brr);

    return 0;
}
