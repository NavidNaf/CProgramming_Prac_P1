#include <stdio.h>

int main(void)
{
    double v, t, s;
    printf("Enter v: ");
    scanf("%lf", &v);
    printf("Enter t: ");
    scanf("%lf", &t);
    s = 2 * v * t;
    printf("Distance covered in %lf s time is %lf", 2 * t, s);
}