/*
    Function Name   : LastChar
    Description     : Accept string and one character, return index of last occurrence.
    Input           : char *, char
    Output          : Integer
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iIndex = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iIndex;
        }
        iIndex++;
        str++;
    }
    return iPos;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^\n]s", arr);

    printf("Enter the character\n");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}
