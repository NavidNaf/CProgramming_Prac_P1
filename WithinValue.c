#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter the Value of n(<30 and <50): \n");
    scanf("%d", &n);
    if (n < 30)
    {
        printf("The Value is under 30\n");
    }
    if (n < 50)
    {
        printf("The value is Under 50 as well\n");
    }
}
