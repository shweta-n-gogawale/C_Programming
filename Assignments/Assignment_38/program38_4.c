/*
    Function Name   : StrCpySmall
    Description     : Copy string by converting all capital characters into small.
    Input           : char *, char *
    Output          : Copied string
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
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

    StrCpySmall(arr, brr);

    printf("%s\n", brr);

    return 0;
}
