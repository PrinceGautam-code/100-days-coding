#include <stdio.h>

int main()
{
    int num, originalNum, remainder, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0)
    {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    // Calculate Armstrong sum
    while (originalNum != 0)
    {
        remainder = originalNum % 10;

        int power = 1;
        for (int i = 1; i <= digits; i++)
        {
            power *= remainder;
        }

        result += power;
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is not an Armstrong Number.\n", num);

    return 0;
}