/*
  Function Name : NonFact
  Description   : Accept a number and display all its NON-factors.
  Input         : int iNo
  Output        : Prints non-factors
  Author        : Shweta Gogawale
  Date          : 2025-11-21
*/

#include <stdio.h>

void NonFact(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {
        if (iNo % i != 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
