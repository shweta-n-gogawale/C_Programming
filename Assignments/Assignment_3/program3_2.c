/*
  Function Name : DisplayFactor
  Description   : Accept an integer and print all factors (positive) of that number.
  Input         : int N
  Output        : prints factors separated by spaces
  Author        : Shweta Gogawale
  Date          : 2025-11-20
*/

#include <stdio.h>

void DisplayFactor(int iNo)
{
    if (iNo == 0)
    {
        printf("Every integer is a factor of 0\n");
        return;
    }

    if (iNo < 0) iNo = -iNo;

    for (int i = 1; i <= iNo; i++)
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

    DisplayFactor(iValue);
    return 0;
}
