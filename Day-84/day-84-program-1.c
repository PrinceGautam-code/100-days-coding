#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status status;
    int choice;

    scanf("%d", &choice);
    status = choice;

    switch (status)
    {
        case SUCCESS:
            printf("Operation successful\n");
            break;

        case FAILURE:
            printf("Operation failed\n");
            break;

        case TIMEOUT:
            printf("Operation timed out\n");
            break;

        default:
            printf("Invalid status\n");
    }

    return 0;
}