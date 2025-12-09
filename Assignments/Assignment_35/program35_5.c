/*
    Function Name   : Reverse
    Description     : Accept string from user and display it in reverse order.
    Input           : char *str
    Output          : void (prints reversed string)
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include<stdio.h>

void Reverse(char *str)
{
    int iCnt = 0;

    // Find length
    while(str[iCnt] != '\0')
    {
        iCnt++;
    }

    // Print reverse
    while(iCnt > 0)
    {
        iCnt--;
        printf("%c", str[iCnt]);
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^\n]s", arr);

    Reverse(arr);

    return 0;
}
