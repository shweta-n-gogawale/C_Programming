/*
    Function Name   : ChkAlpha
    Description     : Accept character from user and check whether it is alphabet or not (A-Z / a-z).
    Input           : Character
    Output          : TRUE / FALSE
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    // Check whether character is Alphabet
    if( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') )
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

    bRet = ChkAlpha(cValue);

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
