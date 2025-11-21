/*
  Function Name : RepeatFirstNumber
  Description   : Accept two integers (value, frequency). Print the first number repeated
                  'frequency' times separated by spaces. If frequency <= 0, prints nothing.
  Input         : int iValue, int iFrequency
  Output        : first number printed iFrequency times
  Author        : Shweta Gogawale
  Date          : 2025-11-20
*/

#include <stdio.h>

void RepeatFirstNumber(int iNo, int iFrequency)
{
    int i = 0;

    if (iFrequency <= 0)
    {
        /* nothing to print */
        printf("\n");
        return;
    }

    for (i = 0; i < iFrequency; i++)
    {
        printf("%d ", iNo);
    }
    printf("\n");
}

int main(void)
{
    int iValue = 12;      /* example first number */
    int iFrequency = 5;   /* example frequency */
    printf("Input: %d  %d\nOutput: ", iValue, iFrequency);
    RepeatFirstNumber(iValue, iFrequency);
    return 0;
}
