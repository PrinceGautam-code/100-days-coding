#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nCompound Interest = %.2f", compoundInterest);

    return 0;
}