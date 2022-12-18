#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int f(int x);
int main() {
	int i, n;
	long long int sum = 0;
	scanf("%d",&n);
	for (i = 1; i <= n; i+=2) {
		sum += i;
	}
	for (i = 2; i <= n; i += 2) {
		sum += f(i);
	}
	printf("%lld",sum);
	return 0;
}
int f(int n) {
	int j,ret=1;
	for (j = 1; j < n; j += 2) {
		if (n % j == 0)ret = j;
	}
	return ret;
}