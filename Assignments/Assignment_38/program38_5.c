/*
    Function Name   : StrCpyToggle
    Description     : Copy string by toggling the case of characters.
    Input           : char *, char *
    Output          : Copied string
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
        }
        else if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyToggle(arr, brr);

    printf("%s\n", brr);

    return 0;
}
