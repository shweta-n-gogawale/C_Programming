/*
  Function Name : FindLargest
  Description   : Accept three integers and return the largest.
  Input         : int x, int y, int z
  Output        : int (largest number)
  Author        : Shweta Gogawale
  Date          : 2025-11-21
*/

#include <stdio.h>

int FindLargest(int x, int y, int z)
{
    if (x >= y && x >= z)
    {
        return x;
    }
    else if (y >= x && y >= z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main(void)
{
    int a = 0, b = 0, c = 0, result = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    result = FindLargest(a, b, c);

    printf("Largest number is: %d\n", result);

    return 0;
}
