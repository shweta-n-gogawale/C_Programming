/*
    Function Name   : StrRevX
    Description     : Accept string from user and reverse that string in place.
    Input           : char *
    Output          : Modified string
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include<stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^\n]s", arr);

    StrRevX(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}
