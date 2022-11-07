//https://www.acwing.com/blog/content/27191/
#include<stdio.h>
int main() {
    int a[21], n;
    a[1] = 1;
    a[2] = 2;
    a[3] = 4;
    for (int i = 4; i <= 20; i++) {
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    }
    scanf("%d", &n);
    printf("%d", a[n]);
    return 0;
}

