#include <stdio.h> 
#include <stdlib.h> 
int main(){
    int N, i, j, n, num = 1;
    int a[100][100] = { 0 };
    scanf_s("%d", &N);
    for (n = 0; n <= N / 2; n++)
    {
        for (j = n; j <= N - n - 1; j++)
            a[n][j] = num++;

        for (i = n + 1; i < N - n - 1; i++)
            a[i][N - n - 1] = num++;

        for (j = N - n - 1; j > n; j--)
            a[N - n - 1][j] = num++;

        for (i = N - n - 1; i > n; i--)
            a[i][n] = num++;
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++) {
            printf("%4d  ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}