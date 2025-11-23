/*
  Function Name   : print_even_numbers
  Description     : Print all even numbers up to given limit.
  Input           : int limit
  Output          : Even numbers up to N
  Author          : Shweta Gogawale
  Date            : 2025-11-23
  Time Complexity : O(N)
*/

#include <stdio.h>

void print_even_numbers(int limit)
{
    for(int i = 1; i <= limit; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    print_even_numbers(limit);

    return 0;
}
