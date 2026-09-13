#include <stdio.h>

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int element, i;

    printf("Enter element to insert: ");
    scanf("%d", &element);

    i = n - 1;

    while(i >= 0 && arr[i] > element)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = element;
    n++;

    printf("Array after insertion: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}