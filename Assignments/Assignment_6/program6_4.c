#include <stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("Positive\n");
    }
    else if(num < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    CheckNumberType(number);

    return 0;
}
