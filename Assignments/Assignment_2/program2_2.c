#include <stdio.h>

void Display(int iNo)
{
    // Print * while number is greater than 0
    while(iNo > 0)
    {
        printf("* ");
        iNo--;   // Decrement
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
