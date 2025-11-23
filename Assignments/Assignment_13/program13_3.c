/*
  Function Name   : print_odd_numbers
  Description     : Print all odd numbers up to given limit.
  Input           : int limit
  Output          : Odd numbers up to N
  Author          : Shweta Gogawale
  Date            : 2025-11-23
  Time Complexity : O(N)
*/

#include <stdio.h>

void print_odd_numbers(int limit)
{
    for(int i = 1; i <= limit; i++)
    {
        if(i % 2 != 0)
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

    print_odd_numbers(limit);

    return 0;
}
