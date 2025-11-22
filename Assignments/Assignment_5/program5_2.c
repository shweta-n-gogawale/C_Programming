/*
  Function Name : FindMax
  Description   : Accept two integers and return the larger one.
  Input         : int a, int b
  Output        : int (maximum)
  Author        : Shweta Gogawale
  Date          : 2025-11-21
*/

#include <stdio.h>

int FindMax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(void)
{
    int num1 = 0, num2 = 0, result = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = FindMax(num1, num2);

    printf("Maximum is: %d\n", result);

    return 0;
}
