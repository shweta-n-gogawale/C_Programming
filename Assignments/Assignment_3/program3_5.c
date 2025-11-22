/*
  Function Name : ChkVowel
  Description   : Return 1 (TRUE) if the character is a vowel (a,e,i,o,u or uppercase), else 0 (FALSE).
  Input         : char cValue
  Output        : main prints "TRUE" or "FALSE" based on return
  Author        : Shweta Gogawale
  Date          : 2025-11-20
*/

#include <stdio.h>

typedef int BOOL;
#define TRUE  1
#define FALSE 0

BOOL ChkVowel(char c)
{
    /* normalize to lowercase */
    if (c >= 'A' && c <= 'Z')
        c = c + ('a' - 'A');

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return TRUE;
    return FALSE;
}

int main(void)
{
    char cValue = '\0';
    printf("Enter character: ");
    if (scanf(" %c", &cValue) != 1) return 0;

    BOOL bRet = ChkVowel(cValue);
    if (bRet == TRUE)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}
