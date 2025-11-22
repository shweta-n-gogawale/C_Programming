/*
  Function Name : DisplayConvert
  Description   : Accept a character and print its converted case (lower->UPPER, UPPER->lower).
  Input         : char cValue
  Output        : prints the converted character
  Author        : Shweta Gogawale
  Date          : 2025-11-20
*/

#include <stdio.h>

void DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')       /* lowercase to uppercase */
    {
        char out = cValue - ('a' - 'A');
        printf("%c\n", out);
    }
    else if (cValue >= 'A' && cValue <= 'Z')  /* uppercase to lowercase */
    {
        char out = cValue + ('a' - 'A');
        printf("%c\n", out);
    }
    else
    {
        /* not an alphabetic character */
        printf("%c\n", cValue);
    }
}

int main(void)
{
    char cValue = '\0';
    printf("Enter character: ");
    if (scanf(" %c", &cValue) != 1) return 0;

    DisplayConvert(cValue);
    return 0;
}
