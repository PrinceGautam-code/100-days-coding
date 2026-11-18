#include <stdio.h>

int main()
{
    int n, sum = 0, actualSum = 0;
    int arr[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    sum = n * (n + 1) / 2;

    printf("%d\n", sum - actualSum);

    return 0;
}