#include <stdio.h>

int main() {
    int arr[100], n = 0, k;
    char ch;

    while (scanf("%d%c", &arr[n], &ch) == 2) {
        n++;
        if (ch == '\n')
            break;
    }

    scanf("%d", &k);

    int sum = 0;

    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int maxSum = sum;

    for (int i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}