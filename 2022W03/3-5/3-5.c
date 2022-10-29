#include<stdio.h>
int fac_bit_count(int n) {
	long long int sum = 1;
	int t;
	for (int i = 1; i <=n; i++) {
		sum *= i;
	}
	for (int j = 2; sum >=10; j++) {
		sum /= 10;
		t = j;
	}
	return t;
}
int main() {
	int cnt, n;
	scanf("%d", &n);
	cnt=fac_bit_count(n);
	printf("%d", cnt);
	return 0;
}