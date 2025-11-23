/*
  Function Name   : RangeDisplay
  Description     : Accept start & end and display all numbers between the range.
  Input           : int iStart, int iEnd
  Output          : Prints numbers from start to end
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(n)
                    (because it prints each number once)
*/

#include <stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(int i = iStart; i <= iEnd; i++)
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

    RangeDisplay(iValue1, iValue2);

    return 0;
}
