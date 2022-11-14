//https://www.acwing.com/blog/content/28178/
#include<stdio.h>
/**
 * Forward declaration of compare API.
 * bool compare(int a, int b);
 * return bool means whether a is less than b.
 */
 /**
  * Return an array of size *returnSize.
  * Note: The returned array must be malloced, assume caller calls free().
  */

int* specialSort(int N, int* returnSize) {
    *returnSize = N;
    int* ret = (int*)malloc(sizeof(int) * N);
    ret[0] = 1;
    for (int i = 2; i <= N; ++i)
    {
        int l = 0, r = i - 2;
        while (l < r)
        {
            int mid = (l + r + 1) >> 1;
            if (compare(ret[mid], i))
                l = mid;
            else
                r = mid - 1;
        }
        for (int j = i - 1; j > l; --j)
            ret[j] = ret[j - 1];
        if (l == 0 && compare(i, ret[0]))
            ret[l] = i;
        else
            ret[l + 1] = i;
    }
    return ret;
}