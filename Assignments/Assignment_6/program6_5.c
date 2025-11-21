/* Program 5: Percentage calculation; handle total==0 safely */
#include <stdio.h>

float Percentage(int totalMarks, int obtainedMarks)
{
    if (totalMarks <= 0) return 0.0f; /* avoid division by zero */
    return ( (float)obtainedMarks * 100.0f ) / (float)totalMarks;
}

int main(void)
{
    int total = 0, obtained = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    if (scanf("%d", &total) != 1) return 0;

    printf("Please enter obtained marks: ");
    if (scanf("%d", &obtained) != 1) return 0;

    fRet = Percentage(total, obtained);

    printf("Percentage = %.2f%%\n", fRet);
    return 0;
}
