#include<stdio.h>
int GCD_recursive(m,n) {
	
		if (m % n == 0)return n;
		else
			return GCD_recursive(n, m % n);
}
int main() {
	int m, n;
	int gcd;
	scanf_s("%d %d",&m,&n);
	int y;
	if (m < n) {
		y = m;
		m = n;
		n = y;
	}
	gcd = GCD_recursive;
	printf("%d",gcd);
	return 0;
}