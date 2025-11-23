/*
  Function Name   : Display
  Description     : Accept a number from the user and print numbers from -iNo to +iNo.
  Input           : int iNo
  Output          : -N ... -3 -2 -1 0 1 2 ... N
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(n)
                    
*/

#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;   // convert negative to positive
    }

    for(int i = -iNo; i <= iNo; i++)
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
