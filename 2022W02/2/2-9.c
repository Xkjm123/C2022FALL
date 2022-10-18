// https://www.acwing.com/blog/content/26422/
#include<stdio.h>
int main() {
#define pi 3.14159
    double r, A;
    scanf("%lf", &r);
    A = pi * r * r;
    printf("A=%.4lf", A);
    return 0;
}