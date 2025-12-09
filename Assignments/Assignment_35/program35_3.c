/*
    Function Name   : Difference
    Description     : Accept string and return difference between frequency of small
                      characters and capital characters.
    Input           : char *str
    Output          : Integer (difference)
    Author          : Shweta Gogawale
    Date            : 07-12-2025
*/

#include<stdio.h>

int Difference(char *str)
{
    int iCapital = 0, iSmall = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        str++;
    }
    return iSmall - iCapital;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^\n]s", arr);

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return 0;
}
