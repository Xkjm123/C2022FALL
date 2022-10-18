//https://www.acwing.com/blog/content/26432/
#include<stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = a;
    if (b > a) max = b;
    if (c > max) max = c;
    printf("%d eh o maior", max);
    return 0;
}