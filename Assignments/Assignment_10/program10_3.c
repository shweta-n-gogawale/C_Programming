/*
  Function Name   : KMtoMeter
  Description     : Convert distance in kilometre to meter.
  Input           : int iNo
  Output          : int meter value
  Author          : Shweta Gogawale
  Date            : 2025-11-23
  Time Complexity : O(1)
                    
*/

#include <stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in KM: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d\n", iRet);

    return 0;
}
