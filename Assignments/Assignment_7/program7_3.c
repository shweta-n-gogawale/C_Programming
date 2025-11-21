#include <stdio.h>

void CheckLeapYear(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
}

int main()
{
    int yr;

    printf("Enter year: ");
    scanf("%d", &yr);

    CheckLeapYear(yr);

    return 0;
}
