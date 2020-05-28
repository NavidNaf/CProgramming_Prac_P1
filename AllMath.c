#include<stdio.h>

// Sum, Diff, Mul, Div
int main (void)
{
    double a, b, s, d, m, div, rem;
    char p='+';
    printf("Enter a: ");
    scanf("%lf",&a);
    printf("Enter b: ");
    scanf("%lf",&b);
    s=a+b;
    d=a-b;
    m=a*b;
    div=a/b;
    printf("Sum: %lf%c%lf=%lf\n",a,p,b,s);
    printf("Difference: %lf-%lf=%lf\n",a,b,d);
    printf("Multiply: %lf*%lf=%lf\n",a,b,m);
    printf("Divide: %lf/%lf=%lf,",a,b,div);
} 
