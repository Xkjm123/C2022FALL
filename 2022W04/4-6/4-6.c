#include<stdio.h>
int main() {
    unsigned long long int n, answer;
    scanf_s("%llu", &n);
    int a[10];
    a[1] = 1;
    a[0] = 1;
    if (n == 1)printf("1");
    else {
        for (int i = 2; i <= n; i++) {
            a[i] = a[i - 1] + a[i - 2];
            answer = 1000000007 % a[i];
        }
    }
    printf("%llu", answer);
    return 0;
}