#include<stdio.h>
int is_pow2(int n) {
	int isprime;
	if (n & (n - 1) == 0) isprime=0;
	else isprime=-1;
	return isprime;
}
int main() {
	int n,isprime;
	scanf_s("%d",&n);
	isprime=is_pow2(n);
	printf("%d",isprime);
	return 0;
}