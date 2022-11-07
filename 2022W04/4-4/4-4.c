//https://www.acwing.com/blog/content/27572/
#include<stdio.h>
#include<math.h>
#define M 1000000
int  main()
{
    int i, n, x, min, f[13], j;
    f[1] = 1;
    f[2] = 3;
    for (i = 3; i <= 13; i++)
    {
        f[i] = M;
        for (x = 1; x < i; x++)
        {
            if (2 * f[x] + pow(2, i - x) - 1 < f[i])
                f[i] = 2 * f[x] + pow(2, i - x) - 1;
        }
    }
    for (j = 1; j < 13; j++)
    {
        printf("%d\n", f[j]);
    }
    return 0;
}
