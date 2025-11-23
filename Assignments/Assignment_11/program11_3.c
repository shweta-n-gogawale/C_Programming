/*
  Function Name   : RangeSum
  Description     : Accept start & end and return sum of all numbers in range.
  Input           : int iStart, int iEnd
  Output          : Returns sum
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(n)
                    (adds each number once)
*/

#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        return -1;     // invalid range
    }

    int iSum = 0;

    for(int i = iStart; i <= iEnd; i++)
    {
        iSum += i;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
        printf("Invalid range");
    else
        printf("Addition is %d", iRet);

    return 0;
}
