#include <stdio.h>
#include <math.h>

int main(void)
{
    int num, check1 = 0;

    do
    {
        printf("Enter a Number: ");
        scanf("%i", &num);
    } while (num <= 1);
    if (num == 1)
    {
        printf("Your Number is 1");
    }
    if (num % 2 != 0)
    {
        for (int i = 1; i <= sqrt(num); i = i + 2)
        {
            int check = num % i;
            if (check == 0)
            {
                check1 = check1 + 1;
            }
        }
    }
    else
    {
        printf("Your Number is not prime\n");
    }

    if (check1 == 1)
    {
        printf("Your Number is prime");
    }
    else
    {
        printf("Your Number is not prime");
    }
}