#include <stdio.h>

int main(void)
{
    double l, inter, ttl;
    int mnth;
    printf("Enter the amount of Loan: ");
    scanf("%lf", &l);
    printf("Enter interest rate: ");
    scanf("%lf", &inter);
    printf("Enter Loan Duration: ");
    scanf("%d", &mnth);
    ttl = l + l * ((inter * 5) / 100);
    int ttlyr = mnth * 12;
    double monthly_rate = ttl / ttlyr;
    printf("The monthly rate for the loan: %lf", monthly_rate);
}