void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    // Logic
    int i = 0;
    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t", i * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
