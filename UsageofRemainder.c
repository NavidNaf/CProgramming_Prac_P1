#include <stdio.h>
int main (void)
{
    int a;
    printf("Enter the value of Dividend: ");
    scanf("%d",&a);
        int rem = a%2;
    if (rem==0){
        printf("The Answer is an Even Number\n");
    }
    else{
        printf("The Answer is An Odd Number\n");
    }
}