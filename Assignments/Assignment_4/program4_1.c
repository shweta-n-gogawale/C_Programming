/*
  Function Name : MultFact
  Description   : Accepts a number and returns multiplication of all its factors.
  Input         : int iNo
  Output        : int (multiplication result)
  Author        : Shweta Gogawale
  Date          : 2025-11-21
*/

#include <stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo/2; i++)
    {
        if (iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d\n", iRet);

    return 0;
}
