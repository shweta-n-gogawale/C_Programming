/*
    Function Name   : ChkDigit
    Description     : Accept character from user and check whether it is digit or not (0-9).
    Input           : Character
    Output          : TRUE / FALSE
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    // Check if character is digit (0–9)
    if(ch >= '0' && ch <= '9')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}
