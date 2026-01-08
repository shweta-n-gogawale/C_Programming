/*
    Function Name   : CountWhite
    Description     : Accept string from user and count number of white spaces.
    Input           : char *str
    Output          : Integer (count)
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^\n]s", arr);

    iRet = CountWhite(arr);

    printf("%d\n", iRet);

    return 0;
}
