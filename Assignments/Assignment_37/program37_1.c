/*
    Function Name   : ChkChar
    Description     : Accept string and one character, check whether character is present or not.
    Input           : char *, char
    Output          : Boolean (TRUE / FALSE)
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string\n");
    scanf("%[^\n]s", arr);

    printf("Enter the character\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}
