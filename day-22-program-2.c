#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0, numerator = 1, denominator = 2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (numerator / denominator);
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series = %.2lf\n", sum);

    return 0;
}