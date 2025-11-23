/*
  Function Name   : RangeSumEven
  Description     : Accept start & end and return sum of all even numbers.
  Input           : int iStart, int iEnd
  Output          : Returns even sum
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(n)
                    (checks all numbers once)
*/

#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        return -1;  
    }

    int iSum = 0;

    for(int i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)
        {
            iSum += i;
        }
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

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == -1)
        printf("Invalid range");
    else
        printf("Addition is %d", iRet);

    return 0;
}
