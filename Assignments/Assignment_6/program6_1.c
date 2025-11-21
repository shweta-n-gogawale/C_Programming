/* Program 1: Read full name (including spaces) and print it */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char Name[100];

    printf("Please enter full name: ");
    if (fgets(Name, sizeof(Name), stdin) != NULL)
    {
        /* remove trailing newline if present */
        size_t len = strlen(Name);
        if (len > 0 && Name[len-1] == '\n') Name[len-1] = '\0';
    }

    printf("Your name is %s\n", Name);
    return 0;
}
