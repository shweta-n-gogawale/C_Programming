/*
  Function Name   : RangeDisplayRev
  Description     : Accept start & end and display range in reverse order.
  Input           : int iStart, int iEnd
  Output          : Prints numbers from end to start
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(n)
                    (prints all numbers once)
*/

#include <stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(int i = iEnd; i >= iStart; i--)
    {
        printf("%d ", i);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}
