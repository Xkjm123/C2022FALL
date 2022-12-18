#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int s = 0;
int sum(int n);
int main() {
	int n;
	scanf("%d",&n);
	s = sum(n);
	printf("%d",s);
	return 0;
}
int sum(int n) {
	int x = n;
	n >= 1 && ( x+= sum(n - 1));
	return x;
}