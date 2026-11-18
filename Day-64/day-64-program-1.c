#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int last[256];
    int start = 0, maxLength = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; i < 256; i++)
    {
        last[i] = -1;
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        unsigned char ch = s[i];

        if (last[ch] >= start)
        {
            start = last[ch] + 1;
        }

        last[ch] = i;

        int length = i - start + 1;

        if (length > maxLength)
        {
            maxLength = length;
        }
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLength);

    return 0;
}