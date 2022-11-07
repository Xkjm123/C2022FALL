//https://www.acwing.com/blog/content/27734/
#include<stdio.h>
int main() {
    int n, m, size;
    int i, j;
    int a[100], b[100];
    scanf("%d %d %d\n", &n, &m, &size);
    for (i = 0; i < n; i++) {
        scanf("%d ", &a[i]);
    }
    for (j = 0; j < m; j++) {
        scanf("%d ", &b[j]);
    }
    for (i = 0; i < size; i++) {
        b[i] = a[i];
    }
    for (i = 0; i < m; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}