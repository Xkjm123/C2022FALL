#include<stdio.h>
#include<math.h>
int main() {
	int n,x,tf=0;
	scanf_s("%d",&n);
	if (n == 2) {
		printf("yes\n");
		goto pos_1;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		x = n % i;
		if (x == 0) {
			printf("no\n");
			tf = 1;
			break;
		}
	}
	if (tf == 0)printf("yes\n");
	pos_1:
	return 0;
}