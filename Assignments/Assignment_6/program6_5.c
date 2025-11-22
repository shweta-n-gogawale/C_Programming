/*
  Function Name   : Percentage
  Description     : Accept total marks and obtained marks, return percentage.
  Input           : int Total, int Obtained
  Output          : float (percentage)
  Author          : Shweta Gogawale
  Date            : 2025-11-22
  Time Complexity : O(1)
*/

#include <stdio.h>

float Percentage(int Total, int Obtained)
{
    if(Total == 0)
    {
        return 0.0f;
    }

    return ((float)Obtained / Total) * 100;
}

int main()
{
    int Total = 0, Obt = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d", &Total);

    printf("Please enter obtained marks: ");
    scanf("%d", &Obt);

    fRet = Percentage(Total, Obt);

    printf("Percentage : %.2f%%\n", fRet);

    return 0;
}
