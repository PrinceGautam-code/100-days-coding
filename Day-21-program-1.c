#include <stdio.h>

int main()
{
    int num, first, last, middle, digits = 0, temp, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    last = num % 10;

    while (temp >= 10)
    {
        temp /= 10;
        digits++;
    }

    first = temp;

    int divisor = 1;
    for (int i = 0; i < digits; i++)
    {
        divisor *= 10;
    }

    middle = (num % divisor) / 10;

    swapped = last * divisor + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", swapped);

    return 0;
}