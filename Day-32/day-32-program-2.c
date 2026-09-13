#include <stdio.h>

int main()
{
    long long num;
    int count[10] = {0};
    int digit, maxDigit = 0, i;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    while(num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    for(i = 1; i < 10; i++)
    {
        if(count[i] > count[maxDigit])
        {
            maxDigit = i;
        }
    }

    printf("Most occurring digit is: %d\n", maxDigit);
    printf("It occurs %d times.", count[maxDigit]);

    return 0;
}