/*
  Function Name : FactRev
  Description   : Accepts a number and displays its factors in decreasing order.
  Input         : int iNo
  Output        : Prints factors
  Author        : Shweta Gogawale
  Date          : 2025-11-21
*/

#include <stdio.h>

void FactRev(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = iNo / 2; i >= 1; i--)
    {
        if (iNo % i == 0)
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

    FactRev(iValue);

    return 0;
}
