#include <stdio.h>

int main(void)
{
    double a1, a2, b1, b2, c1, c2, x, y;
    printf("a1 = ");
    scanf("%lf", &a1);
    printf("b1 = ");
    scanf("%lf", &b1);
    printf("c1 = ");
    scanf("%lf", &c1);
    printf("a2 = ");
    scanf("%lf", &a2);
    printf("b2 = ");
    scanf("%lf", &b2);
    printf("c2 = ");
    scanf("%lf", &c2);
    double d = (a1 * b2) - (a2 * b1);
    if ((int)d == 0)
    {
        printf("The equation can not be solved");
    }
    else
    {
        x = ((c1 * b2) - (b1 * c2)) / d;
        y = ((a1 * c2) - (c1 * a2)) / d;
        printf("The value of x is %lf", x);
        printf("The value of y is %lf", y);
    }
}