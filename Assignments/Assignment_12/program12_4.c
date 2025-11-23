/*
  Function Name   : sum_of_even_factors
  Description     : Return sum of all positive even factors (excluding number)
  Input           : int number
  Output          : int sum
  Author          : Shweta Gogawale
  Date            : 2025-11-23
  Time Complexity : O(n)
*/

#include <stdio.h>

int sum_of_even_factors(int number)
{
    int sum = 0;

    if(number < 0)
    {
        number = -number;
    }

    for(int i = 1; i < number; i++)
    {
        if(i % 2 == 0 && number % i == 0)
        {
            sum = sum + i;
        }
    }

    return sum;
}

int main()
{
    int number = 0;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%d\n", sum_of_even_factors(number));

    return 0;
}
