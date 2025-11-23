/*
  Function Name   : TableRev
  Description     : Print table of given number in reverse order.
  Input           : int iNo
  Output          : 10 multiples in reverse
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(1)
*/

#include <stdio.h>

void TableRev(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 10; i >= 1; i--)
    {
        printf("%d ", iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}
