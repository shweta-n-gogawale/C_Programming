/*
    Function Name   : ChkSmall
    Description     : Accept character from user and check whether it is small case or not (a-z).
    Input           : Character
    Output          : TRUE / FALSE
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    // Check if character is between 'a' and 'z'
    if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

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
