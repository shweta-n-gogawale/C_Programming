/*
  Function Name   : OddDisplay
  Description     : Accept a number from the user and print all odd numbers up to that number.
  Input           : int iNo
  Output          : 1 3 5 7 9 ...
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(n)
                    
*/

#include <stdio.h>

void OddDisplay(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;   // convert negative to positive
    }

    for(int i = 1; i <= iNo; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}
