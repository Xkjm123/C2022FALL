//https://www.acwing.com/blog/content/27190/
#include<stdio.h>
int n, t, sum;
int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        if (n == 1) sum = 0;
        else sum = 1;
        for (int i = 2; i <= n / i; i++) if (n % i == 0) {
            sum += i;
            if (n / i != i) sum += n / i;
        }
        if (sum != n) printf("%d is not perfect\n", n);
        else printf("%d is perfect\n", n);
    }
    return 0;
}