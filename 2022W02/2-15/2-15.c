//https://www.acwing.com/blog/content/26437/
#include<stdio.h>
int main() {
	int n, t;
	scanf("%d", &n);
	int a1 = 1, a2 = 1;
	if (n == 1) {
		printf("0");
	}
	else if (n == 2) {
		printf("0 1");
	}
	else if (n == 3) {
		printf("0 1 1");
	}
	else {
		printf("0 %d %d", a1, a2);
		for (int i = 3; i < n; i++) {
			t = a2;
			a2 = a1 + a2;
			a1 = t;
			printf(" %d", a2);
		}
	}
	return 0;
}