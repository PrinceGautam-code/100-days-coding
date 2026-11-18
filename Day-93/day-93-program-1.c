#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s[5];
    int highest = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    for (int i = 1; i < 5; i++)
    {
        if (s[i].marks > s[highest].marks)
        {
            highest = i;
        }
    }

    printf("Student with Highest Marks:\n");
    printf("Name: %s\n", s[highest].name);
    printf("Roll Number: %d\n", s[highest].roll_no);
    printf("Marks: %.2f\n", s[highest].marks);

    return 0;
}