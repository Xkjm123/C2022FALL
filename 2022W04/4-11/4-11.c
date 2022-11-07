//https://www.acwing.com/blog/content/27733/
#include<stdio.h>
int main() {
    float a[100], b[100];
    int i, j = 0;
    for (i = 0; i < 100; i++) {
        scanf("%f\n", &a[i]);
    }
    for (i = 0; i < 100; i++) {
        if (a[i] <= 10) {
            printf("A[%d] = %.1f\n", i, a[i]);
        }
    }
    return 0;
}