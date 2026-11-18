#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char text[200];

    file = fopen("info.txt", "a");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    fclose(file);

    printf("Text appended successfully.\n");

    return 0;
}