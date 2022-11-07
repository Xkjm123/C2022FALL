//https://www.acwing.com/blog/content/27719/
#include<stdio.h>
int main() {
    int i, j;
    int a[20], b[20];
    for (i = 0; i < 20; i++) {
        scanf("%d\n", &a[i]);
    }
    i = 0;
    for (j = 19; j >= 0; j--) {
        b[j] = a[i];
        i++;
    }
    for (j = 0; j < 20; j++) {
        printf("N[%d] = %d\n", j, b[j]);
    }
    return 0;
}