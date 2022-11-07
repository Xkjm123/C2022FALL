//https://www.acwing.com/blog/content/27721/
#include<stdio.h>
int i, j;
int n, size;
int a[1000], b[1000];
int main() {
    scanf("%d %d\n", &n, &size);
    for (i = 0; i < n; i++) {
        scanf("%d ", &a[i]);
    }
    i = 0;
    for (j = size - 1; j >= 0; j--) {
        b[j] = a[i];
        i++;
    }
    for (j = 0; j < size; j++) {
        printf("%d ", b[j]);
    }
    for (i = size; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}


