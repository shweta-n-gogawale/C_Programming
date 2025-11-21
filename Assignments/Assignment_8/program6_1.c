#include <stdio.h>

void CheckEvenOdd(int num)
{
    if(num % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    CheckEvenOdd(number);

    return 0;
}
