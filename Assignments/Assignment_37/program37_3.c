/*
    Function Name   : FirstChar
    Description     : Accept string and one character, return index of first occurrence.
    Input           : char *, char
    Output          : Integer
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iIndex = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex;
        }
        iIndex++;
        str++;
    }
    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}
