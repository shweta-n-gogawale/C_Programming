/*
  Function Name   : PrintName
  Description     : Accept a full name from the user and print it.
  Input           : char Name[30]
  Output          : Prints the entered name
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(n)
*/

#include <stdio.h>

void PrintName(char Name[])
{
    printf("Your name is %s\n", Name);
}

int main()
{
    char Name[30];

    printf("Please enter full name: ");
    scanf("%s", Name);

    PrintName(Name);

    return 0;
}
