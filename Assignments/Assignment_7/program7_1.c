/*
  Function Name   : Pattern
  Description     : Accept a number from the user and print '$ *' that many times.
  Input           : int iNo
  Output          : Prints pattern like $ * $ * $ * ...
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(n)
                    
*/

#include <stdio.h>

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;     // Handle negative input
    }

    for(int i = 1; i <= iNo; i++)
    {
        printf("$ * ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
