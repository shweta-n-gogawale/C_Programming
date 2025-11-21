/*
  Function Name : IsEven
  Description   : Accept an integer and return 1 (true) if it is even, otherwise 0 (false).
  Input         : int N
  Output        : prints "Even" or "Odd" in main for demonstration
  Author        : Shweta Gogawale
  Date          : 2025-11-20
*/

#include <stdio.h>

int IsEven(int iNo)
{
    return (iNo % 2 == 0) ? 1 : 0;
}

int main(void)
{
    int iValue = 11; /* example input */
    printf("Input: %d\nOutput: ", iValue);
    if (IsEven(iValue))
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return 0;
}
