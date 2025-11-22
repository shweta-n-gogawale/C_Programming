/*
  Function Name : CheckLeapYear
  Description   : Accept a year and print whether it is a leap year.
  Input         : int year
  Output        : Prints "Leap Year" or "Not Leap Year"
  Author        : Shweta Gogawale
  Date          : 2025-11-21
*/

#include <stdio.h>

void CheckLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not Leap Year\n");
    }
}

int main(void)
{
    int yr = 0;

    printf("Enter year: ");
    scanf("%d", &yr);

    CheckLeapYear(yr);

    return 0;
}
