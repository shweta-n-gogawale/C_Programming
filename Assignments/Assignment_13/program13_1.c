/*
  Function Name   : print_numbers
  Description     : Print numbers from 1 to given limit.
  Input           : int limit
  Output          : Prints 1 to limit
  Author          : Shweta Gogawale
  Date            : 2025-11-23
  Time Complexity : O(N)
*/

#include <stdio.h>

void print_numbers(int limit)
{
    for(int i = 1; i <= limit; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    print_numbers(limit);

    return 0;
}
