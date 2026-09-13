#include <stdio.h>

int main()
{
    int arr[5] = {10, 40, 20, 50, 30};
    int largest, secondLargest, i;

    largest = arr[0];
    secondLargest = arr[0];

    for(i = 0; i < 5; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Second largest element is: %d", secondLargest);

    return 0;
}