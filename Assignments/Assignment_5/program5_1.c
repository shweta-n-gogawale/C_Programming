/*
  Function Name : CheckEvenOdd
  Description   : Accept a number and print whether it is even or odd.
  Input         : int num
  Output        : Prints "Even" or "Odd"
  Author        : Shweta Gogawale
  Date          : 2025-11-21
*/

#include <stdio.h>

void CheckEvenOdd(int num)
{
    if (num % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}

int main(void)
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    CheckEvenOdd(number);

    return 0;
}
