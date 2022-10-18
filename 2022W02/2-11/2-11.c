//https://www.acwing.com/blog/content/26433/
#include<stdio.h>
int main() {
    int n, h, m, s;
    scanf("%d", &n);
    h = n / 3600;
    m = (n - 3600 * h) / 60;
    s = n - m * 60 - h * 3600;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}