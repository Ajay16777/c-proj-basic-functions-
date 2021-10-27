#include<stdio.h>
#include"largerof.h"

int main()
{
    //input two double integers;
    double a, b;
    printf("Enter two double numbers:\n");
    scanf("%lf %lf", &a, &b);
    //test the largerOf() function
    printf("testing largerof fun\n");
    largerOf(&a, &b);
    printf("%f\n", a);
    printf("%f\n", b);
}
