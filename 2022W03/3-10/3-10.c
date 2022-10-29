//https://www.acwing.com/blog/content/27189/
#include<stdio.h>
int main() {
    double inc, tax;
    scanf("%lf", &inc);
    if (inc <= 2000.00)printf("Isento");
    else if (inc <= 3000.00) {
        tax = (inc - 2000.00) * 0.08;
        printf("R$ %.2lf", tax);
    }
    else if (inc <= 4500.00) {
        tax = 80 + (inc - 3000.00) * 0.18;
        printf("R$ %.2lf", tax);
    }
    else {
        tax = 350 + (inc - 4500.00) * 0.28;
        printf("R$ %.2lf", tax);
    }
    return 0;
}