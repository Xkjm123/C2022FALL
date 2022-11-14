#include<stdio.h>
#include<string.h>
int main() {
	int x[1005]={0}, y[1005]={0};
	int i, j;
	char a[1005], b[1005];
	gets(a);
	gets(b);
	int len1 = strlen(a), len2 = strlen(b);
	int len = len1 > len2 ? len1 : len2;
	for (i = 0; i < len1; i++) {
		x[i] = a[i] - '0';
	}
	for (i = 0; i < len1; i++) {
		y[i] = b[i] - '0';
	}
	for (i = 0; i < len; i++) {
		x[i]+=y[i];
		x[i + 1] += x[i] / 10;
		x[i] %= 10;
	}
	for (j = 0; j < len;j++) {
		printf("%d",x[j]);
	}
	return 0;
}