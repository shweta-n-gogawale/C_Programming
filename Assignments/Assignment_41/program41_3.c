/*
    Function Name   : Strlen
    Description     : Accept string and return number of characters using recursion.
    Input           : char *
    Output          : Integer
    Author          : Shweta Gogawale
    Date            : 10-01-2026
*/

#include<stdio.h>

int Strlen(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }
    return 1 + Strlen(str + 1);
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string\n");
    scanf("%s", arr);

    iRet = Strlen(arr);

    printf("%d\n", iRet);

    return 0;
}
