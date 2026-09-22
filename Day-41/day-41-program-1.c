#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters without strlen()
    while (str[count] != '\0')
    {
        count++;
    }

    // Remove newline character from count
    if (count > 0 && str[count - 1] == '\n')
    {
        count--;
    }

    printf("Number of characters = %d\n", count);

    return 0;
}