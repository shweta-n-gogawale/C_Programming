/*
  Function Name   : Number
  Description     : Accept number and print small/medium/large based on range.
  Input           : int iNo
  Output          : Text (Small / Medium / Large)
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(1)
*/

#include <stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}
