/*
  Function Name   : ChkEqual
  Description     : Accept two integers and return TRUE(1) if they are equal, otherwise FALSE(0).
  Input           : int iNo1, int iNo2
  Output          : TRUE or FALSE
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(1)
*/

#include <stdio.h>
#include <stdbool.h>

bool ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Please enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
}
