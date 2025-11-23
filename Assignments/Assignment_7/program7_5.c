/*
  Function Name   : MultipleDisplay
  Description     : Accept a number from the user and print its first 5 multiples.
  Input           : int iNo
  Output          : 5 multiples → N  2N  3N  4N  5N
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(1)
                    
*/

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;   
    }

    for(int i = 1; i <= 5; i++)
    {
        printf("%d ", iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}
