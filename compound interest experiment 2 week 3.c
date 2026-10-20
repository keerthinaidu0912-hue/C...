#include <stdio.h>
#include <math.h>
void main()
{
    float p, r, t, amount, ci;
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time period in years: ");
    scanf("%f", &t);
    amount = p * pow((1 + r / 100), t);
    ci = amount - p;
    printf("Compound Interest = %.2f", ci);
}


    