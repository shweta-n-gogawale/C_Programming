/*
  Function Name : PrintEven
  Description   : Accept an integer N and print first N even numbers (2,4,6,...).
  Input         : int N
  Output        : prints the first N even numbers separated by spaces
  Author        : Shweta Gogawale
  Date          : 2025-11-20
*/

#include <stdio.h>

void PrintEven(int iNo)
{
    if (iNo <= 0)
        return;

    int i;
    for (i = 1; i <= iNo; i++)
    {
        printf("%d ", 2 * i);
    }
    printf("\n");
}

int main(void)
{
    int iValue = 0;
    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1) return 0;

    PrintEven(iValue);
    return 0;
}
