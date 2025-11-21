/*
  Function Name : PrintStars_Dec
  Description   : Accept an integer N and print N asterisks '*' using a loop that decrements.
  Input         : int N
  Output        : N asterisks printed on one line
  Author        : Shweta Gogawale
  Date          : 2025-11-20
*/

#include <stdio.h>

void PrintStars_Dec(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }

    while (iNo > 0)
    {
        printf("* ");
        iNo--;
    }
    printf("\n");
}

int main(void)
{
    int iValue = 5; /* example input */
    printf("Input: %d\nOutput: ", iValue);
    PrintStars_Dec(iValue);
    return 0;
}
