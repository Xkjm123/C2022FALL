//https://www.acwing.com/blog/content/28179/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
    int x[105], y[105], i, j, s, n;
    int maxs = 0, m;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (x[i] == x[j]) {
                for (s = 0; s < n; s++) {
                    if (y[s] == y[j] || y[s] == y[i]) {
                        m = abs(x[i] - x[s]) * abs(y[i] - y[j]);
                        if (m > maxs)maxs = m;
                    }
                }
            }
        }
    }
    printf("%d", maxs);
    return 0;
}