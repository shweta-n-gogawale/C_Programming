/*
    Function Name   : StrCpyRev
    Description     : Accept string and copy it into another string in reverse order.
    Input           : char *, char *
    Output          : Copied string
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    int iLen = 0, i = 0;

    while(src[iLen] != '\0')
    {
        iLen++;
    }

    for(i = iLen - 1; i >= 0; i--)
    {
        *dest = src[i];
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr, brr);

    printf("%s\n", brr);

    return 0;
}
