//https://www.acwing.com/blog/content/26435/
#include<stdio.h>
int main() {
    int a, b;
    scanf("%d %d\n", &a, &b);
    if (a > b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
    if (b % a == 0)printf("Sao Multiplos");
    else printf("Nao sao Multiplos");
    return 0;
}