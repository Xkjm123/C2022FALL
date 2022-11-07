//https://www.acwing.com/blog/content/27738/
#include <stdio.h>
int main() {
	char a[30];
	int count = 0;
	scanf("%c", &a[count]);
	while (a[count] != '\n') {
		count++;
		scanf("%c", &a[count]);
	}
	for (int i = 0; i < count - 1; i++) {
		for (int j = count - 1; j > i; j--) {
			if (a[j - 1] > a[j]) {
				int temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}

		}

	}
	for (int i = 0; i < count; i++) {
		printf("%c", a[i]);
	}
	return 0;
}