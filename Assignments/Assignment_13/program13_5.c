/*
  Function Name   : sum_even_numbers
  Description     : Return sum of first N even natural numbers.
  Input           : int limit
  Output          : Sum of even numbers (2 + 4 + ... )
  Author          : Shweta Gogawale
  Date            : 2025-11-23
  Time Complexity : O(N)
*/

#include <stdio.h>

int sum_even_numbers(int limit)
{
    int sum = 0;

    for(int i = 1; i <= limit; i++)
    {
        sum = sum + (2 * i);
    }

    return sum;
}

int main(void)
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    printf("%d\n", sum_even_numbers(limit));

    return 0;
}
