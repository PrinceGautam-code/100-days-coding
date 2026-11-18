#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main()
{
    struct Employee emp;

    scanf("%s", emp.name);
    scanf("%d", &emp.id);
    scanf("%f", &emp.salary);
    scanf("%d %d %d",
          &emp.joiningDate.day,
          &emp.joiningDate.month,
          &emp.joiningDate.year);

    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d/%02d/%d\n",
           emp.joiningDate.day,
           emp.joiningDate.month,
           emp.joiningDate.year);

    return 0;
}