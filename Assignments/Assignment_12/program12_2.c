/*
  Function Name   : count_factors
  Description     : Return total number of positive factors.
  Input           : int number
  Output          : int (count)
  Author          : Shweta Gogawale
  Date            : 2025-11-23
  Time Complexity : O(n)
*/

#include <stdio.h>

int count_factors(int number)
{
    int count = 0;

    if(number < 0)
    {
        number = -number;
    }

    for(int i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int number = 0;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%d\n", count_factors(number));

    return 0;
}
