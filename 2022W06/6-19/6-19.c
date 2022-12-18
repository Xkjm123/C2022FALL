#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a[40005], i, j, n, cnt = 0;
	scanf("%d",&n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j])cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}