#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100];
    char ch;

    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Error: File does not exist.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}