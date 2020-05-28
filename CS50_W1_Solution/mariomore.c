<<<<<<< HEAD
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i, j, k, n;
    do
    {
        n = get_int("Height: ");
    } while (n < 1 || n > 8);
    for (i = 1; i <= n; i++)
    {
        for (k = n; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int m = 1; m <= i; m++)
        {

            printf("#");
        }
        printf("\n");
    }
}