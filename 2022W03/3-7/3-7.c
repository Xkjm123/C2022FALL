#include<stdio.h>
int GCD_iterative(int m, int n) {
	int y, t, gcd;
	if (m > n) {
		t = m;
		m = n;
		n = t;
	}
	y = n % m;
	gcd = y;
	while (gcd != 0) {
		n = m;
		m = gcd;
		gcd = n % m;
	}
	return m;
}
int main() {
	int m, n, gcd;
	scanf("%d %d", &m, &n);
	gcd = GCD_iterative(m, n);
	printf("%d", gcd);
	return 0;
}