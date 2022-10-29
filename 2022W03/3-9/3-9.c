//https://www.acwing.com/blog/content/27188/
#include<stdio.h>
int main() {
    double n;
    int i = 0;
    scanf("%lf", &n);
    int sum = (int)(n * 100);
    printf("NOTAS:\n");
    while (sum >= 10000) {
        sum -= 10000.00;
        i++;
    }
    printf("%d nota(s) de R$ 100.00\n", i);
    i = 0;
    while (sum >= 5000.00) {
        sum -= 5000;
        i++;
    }
    printf("%d nota(s) de R$ 50.00\n", i);
    i = 0;
    while (sum >= 2000.00) {
        sum -= 2000;
        i++;
    }
    printf("%d nota(s) de R$ 20.00\n", i);
    i = 0;
    while (sum >= 1000.00) {
        sum -= 1000;
        i++;
    }
    printf("%d nota(s) de R$ 10.00\n", i);
    i = 0;
    while (sum >= 500.00) {
        sum -= 500;
        i++;
    }
    printf("%d nota(s) de R$ 5.00\n", i);
    i = 0;
    while (sum >= 200.00) {
        sum -= 200;
        i++;
    }
    printf("%d nota(s) de R$ 2.00\n", i);
    i = 0;
    printf("MOEDAS:\n");
    while (sum >= 100.00) {
        sum -= 100;
        i++;
    }
    printf("%d moeda(s) de R$ 1.00\n", i);
    i = 0;
    while (sum >= 50) {
        sum -= 50;
        i++;
    }
    printf("%d moeda(s) de R$ 0.50\n", i);
    i = 0;
    while (sum >= 25) {
        sum -= 25;
        i++;
    }
    printf("%d moeda(s) de R$ 0.25\n", i);
    i = 0;
    while (sum >= 10) {
        sum -= 10;
        i++;
    }
    printf("%d moeda(s) de R$ 0.10\n", i);
    i = 0;
    while (sum >= 5) {
        sum -= 5;
        i++;
    }
    printf("%d moeda(s) de R$ 0.05\n", i);
    i = 0;
    while (sum >= 1) {
        sum -= 1;
        i++;
    }
    printf("%d moeda(s) de R$ 0.01\n", i);
    i = 0;
    return 0;
}