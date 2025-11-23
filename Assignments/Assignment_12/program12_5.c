/*
  Function Name   : is_divisible_by_five
  Description     : Return true if number divisible by 5 else false.
  Input           : int number
  Output          : bool
  Author          : Shweta Gogawale
  Date            : 2025-11-23
  Time Complexity : O(1)
*/

#include <stdio.h>
#include <stdbool.h>

bool is_divisible_by_five(int number)
{
    if(number % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int number = 0;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%s\n", is_divisible_by_five(number) ? "Yes" : "No");

    return 0;
}
