#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceFile[100], destinationFile[100];
    int ch;

    scanf("%s", sourceFile);
    scanf("%s", destinationFile);

    source = fopen(sourceFile, "r");

    if (source == NULL)
    {
        printf("Error opening source file.\n");
        return 1;
    }

    destination = fopen(destinationFile, "w");

    if (destination == NULL)
    {
        printf("Error opening destination file.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}