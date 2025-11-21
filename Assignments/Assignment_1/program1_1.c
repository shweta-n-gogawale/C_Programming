// /////////////////////////////////////////////////////////////////
// Function Name : Divide
// Description   : Divides two integers and returns the result.
// Input         : int, int
// Output        : int
// Author        : Shweta Gogawale
// Date          : 20/11/2025
// Time Complexity : O(1)
// /////////////////////////////////////////////////////////////////

#include <stdio.h>

int Divide(int iNo1, int iNo2)
{
    if(iNo2 == 0)
    {
        return -1;
    }

    return iNo1 / iNo2;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is %d\n", iRet);

    return 0;
}
