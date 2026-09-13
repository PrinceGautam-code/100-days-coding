#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int search, low = 0, high = 4, mid;
    int found = 0;

    printf("Enter element to search: ");
    scanf("%d", &search);

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == search)
        {
            found = 1;
            break;
        }
        else if(arr[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 1)
        printf("Element found at position %d", mid + 1);
    else
        printf("Element not found");

    return 0;
}