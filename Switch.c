#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter the Value of n: \n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    default:
        printf("Default");
        break;
    }
}
