/*
  Function Name : CheckNumberType
  Description   : Accept a number and print if it is positive, negative or zero.
  Input         : int num
  Output        : Prints "Positive", "Negative" or "Zero"
  Author        : Shweta Gogawale
  Date          : 2025-11-21
*/

#include <stdio.h>

void CheckNumberType(int num)
{
    if (num > 0)
    {
        printf("Positive\n");
    }
    else if (num < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
}

int main(void)
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    CheckNumberType(number);

    return 0;
}
