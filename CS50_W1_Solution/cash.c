#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    double change;
    do
    {
        change = get_float("Change Owed: ");

    } while (change <= 0);
    int value = round(change * 100);
    double s = value / 25;
    int sum = (int)s;
    double r = value % 25;

    if (r < 25)
    {
        double s1 = r / 10;
        int sum1 = (int)s1;
        double r1 = (int)r % 10;

        if (r1 < 10)
        {
            double s2 = r1 / 5;
            int sum2 = (int)s2;
            double r2 = (int)r1 % 5;

            if (r2 < 5)
            {
                double s3 = r2 / 5;
                int sum3 = (int)s3;
                double r3 = (int)r2 % 5;
                int summ = sum + sum1 + sum2 + sum3 + (int)r3;
                printf("%d\n", summ);
            }
        }
    }
}