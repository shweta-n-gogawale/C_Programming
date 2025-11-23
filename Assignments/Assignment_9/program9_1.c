/*
  Function Name   : Display
  Description     : Accept number from user and print '*' iNo times and then '#' iNo times.
  Input           : int iNo
  Output          : Pattern of * and #
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(n)
                    (because loop runs iNo times twice)
*/

#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;    // convert negative to positive
    }

    for(int i = 1; i <= iNo; i++)
    {
        printf("* ");
    }

    for(int i = 1; i <= iNo; i++)
    {
        printf("# ");
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
