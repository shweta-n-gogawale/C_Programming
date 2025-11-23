/*
  Function Name   : Table
  Description     : Print table of given number from 1 to 10.
  Input           : int iNo
  Output          : 10 multiples of number
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(1)
*/

#include <stdio.h>

void Table(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= 10; i++)
    {
        printf("%d ", iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}
