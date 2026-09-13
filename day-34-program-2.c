#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int element, i, position = -1;

    printf("Enter element to delete: ");
    scanf("%d", &element);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            position = i;
            break;
        }
    }

    if(position == -1)
    {
        printf("Element not found");
    }
    else
    {
        for(i = position; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Array after deletion: ");

        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}