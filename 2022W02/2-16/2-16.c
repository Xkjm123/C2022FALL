//https://www.acwing.com/blog/content/26438/
#include<stdio.h>
int main() {
    int a, n, sum = 0;
    scanf("%d %d", &a, &n);
    while (n <= 0)scanf("%d\n", &n);
    for (int i = n; i > 0; i--) {
        sum += a;
        a++;
    }
    printf("%d\n", sum);
    return 0;
}