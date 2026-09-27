#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0;
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            if(j > maxLength)
            {
                maxLength = j;
                strcpy(longest, word);
            }

            j = 0;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}