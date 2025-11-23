/*
  Function Name   : print_factors
  Description     : Print all positive factors of given number.
  Input           : int number
  Output          : factors in ascending order
  Author          : Shweta Gogawale
  Date            : 2025-11-23
  Time Complexity : O(n)
*/

#include <stdio.h>

void print_factors(int number)
{
    if(number < 0)
    {
        number = -number;
    }

    for(int i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int number = 0;

    printf("Enter number : ");
    scanf("%d", &number);

    print_factors(number);

    return 0;
}
