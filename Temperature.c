#include<stdio.h>

int main(void){
    int c, f;
    printf("Enter The temp in C: ");
    scanf("%d",&c);
    f=((9*c)/5)+32;
    printf("The temp in F is: %d",f);
}