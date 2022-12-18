#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int add(int n1, int n2);
int main() {
	int n1, n2;
	scanf("%d %d",&n1,&n2);
	int sum = add(n1, n2);
	printf("%d",sum);
	return 0;
}
int add(int n1, int n2) {
	int sum,fwd;
	while(n2!=0) {
		sum = n1 ^ n2;
		fwd =( n1 & n2)<<1;
		n1 = sum;
		n2 = fwd;
	}
	return n1;
}
