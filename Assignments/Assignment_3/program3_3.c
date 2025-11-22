/*
  Function Name : DisplayEvenFactor
  Description   : Accept an integer and print its even factors only.
  Input         : int N
  Output        : prints even factors separated by spaces
  Author        : Shweta Gogawale
  Date          : 2025-11-20
*/

#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    if (iNo == 0)
    {
        printf("Every integer is a factor of 0 (even factors are all even integers)\n");
        return;
    }

    if (iNo < 0) iNo = -iNo;

    for (int i = 2; i <= iNo; i += 2)  /* iterate only even i */
    {
        if (iNo % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}

int main(void)
{
    int iValue = 0;
    printf("Enter number: ");
    if (scanf("%d", &iValue) != 1) return 0;

    DisplayEvenFactor(iValue);
    return 0;
}
