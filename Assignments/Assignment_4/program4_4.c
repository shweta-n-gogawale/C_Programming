/*
  Function Name : SumNonFact
  Description   : Accept a number and return summation of all its NON-factors.
  Input         : int iNo
  Output        : int (summation)
  Author        : Shweta Gogawale
  Date          : 2025-11-21
*/

#include <stdio.h>

int SumNonFact(int iNo)
{
    int i = 0;
    int iSum = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {
        if (iNo % i != 0)
        {
            iSum = iSum + i;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n", iRet);

    return 0;
}
