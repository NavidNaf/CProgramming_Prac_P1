#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Enter the value of Dividend: ");
    scanf("%d", &a);
    printf("Enter the Value of Divisor: ");
    scanf("%d", &b);
    int quot = a / b;
    int rem = a - (b * quot);
    printf("The Remainder is: %d", rem);
}