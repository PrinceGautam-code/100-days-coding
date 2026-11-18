#include <stdio.h>

enum Status
{
    START = 10,
    PROCESS = 20,
    END = 30
};

int main()
{
    printf("START = %d\n", START);
    printf("PROCESS = %d\n", PROCESS);
    printf("END = %d\n", END);

    return 0;
}