#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i, j, sum = 0;

    printf("Enter 9 elements of matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum = sum + matrix[i][j];
        }
    }

    printf("Sum of all elements = %d", sum);

    return 0;
}