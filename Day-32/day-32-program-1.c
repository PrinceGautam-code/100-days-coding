#include <stdio.h>

int main()
{
    int arr1[3] = {10, 20, 30};
    int arr2[3] = {40, 50, 60};
    int merged[6];
    int i;

    // Copy first array
    for(i = 0; i < 3; i++)
    {
        merged[i] = arr1[i];
    }

    // Copy second array
    for(i = 0; i < 3; i++)
    {
        merged[i + 3] = arr2[i];
    }

    printf("Merged array: ");

    for(i = 0; i < 6; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}