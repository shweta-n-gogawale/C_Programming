/*
  Function Name   : Display
  Description     : Accept a number from the user and print numbers from 1 to that number.
  Input           : int iNo
  Output          : 1 2 3 ... N
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(n)
                    
*/

#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;      // Handle negative input
    }

    for(int i = 1; i <= iNo; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
