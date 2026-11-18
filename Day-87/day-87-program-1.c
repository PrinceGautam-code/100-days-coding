#include <stdio.h>

enum UserRole
{
    ADMIN = 1,
    USER,
    GUEST
};

int main()
{
    int choice;
    enum UserRole role;

    scanf("%d", &choice);
    role = choice;

    switch (role)
    {
        case ADMIN:
            printf("Welcome Admin\n");
            break;

        case USER:
            printf("Welcome User\n");
            break;

        case GUEST:
            printf("Welcome Guest\n");
            break;

        default:
            printf("Invalid role\n");
    }

    return 0;
}