/*
  Function Name : PrintStars_Inc
  Description   : Accept an integer N and print N asterisks '*' (left-to-right) using a loop.
  Input         : int N
  Output        : N asterisks printed on one line
  Author        : Shweta Gogawale
  Date          : 2025-11-20
*/

#include <stdio.h>

void PrintStars_Inc(int iNo)
{
    int i = 0;
    if (iNo <= 0)
    {
        /* nothing to print */
        return;
    }

    /* print using a simple while loop */
    i = 0;
    while (i < iNo)
    {
        printf("* ");
        i++;
    }
    printf("\n");
}

int main(void)
{
    int iValue = 5; /* example input */
    printf("Input: %d\nOutput: ", iValue);
    PrintStars_Inc(iValue);
    return 0;
}
