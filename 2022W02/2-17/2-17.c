//https://www.acwing.com/blog/content/26439/
#include<stdio.h>
int main() {
    int n, x;//xำเสý
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        x = n % i;
        if (x == 0)printf("%d\n", i);
    }
    return 0;
}