/*
  Function Name   : sum_natural_numbers
  Description     : Return sum of first N natural numbers.
  Input           : int limit
  Output          : Sum (1 + 2 + 3 + ... + N)
  Author          : Shweta Gogawale
  Date            : 2025-11-23
  Time Complexity : O(N)
*/

#include <stdio.h>

int sum_natural_numbers(int limit)
{
    int sum = 0;

    for(int i = 1; i <= limit; i++)
    {
        sum = sum + i;
    }

    return sum;
}

int main()
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    printf("%d\n", sum_natural_numbers(limit));

    return 0;
}
