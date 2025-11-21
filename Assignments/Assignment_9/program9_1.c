#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int i = 0;

    // Print stars
    for(i = 1; i <= iNo; i++)
    {
        printf("* ");
    }

    // Print hashes
    for(i = 1; i <= iNo; i++)
    {
        printf("# ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
