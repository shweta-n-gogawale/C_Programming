/*
    Function Name   : ChkCapital
    Description     : Accept character from user and check whether it is capital or not (A-Z).
    Input           : Character
    Output          : TRUE / FALSE
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    // Check if character is CAPITAL letter
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

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
