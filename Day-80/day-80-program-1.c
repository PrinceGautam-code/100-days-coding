#include <stdio.h>

int main()
{
    FILE *file;
    char name[50];
    int roll, marks, n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    file = fopen("students.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter name, roll number and marks: ");
        scanf("%s %d %d", name, &roll, &marks);

        fprintf(file, "%s %d %d\n", name, roll, marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nStudent Records:\n");

    while (fscanf(file, "%s %d %d", name, &roll, &marks) == 3)
    {
        printf("Name: %s, Roll No: %d, Marks: %d\n",
               name, roll, marks);
    }

    fclose(file);

    return 0;
}