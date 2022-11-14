#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>
#include<string.h>
void k_reverse(char* str, int k);
int main() {
	int k;
	char str[105];
	gets_s(str);
	scanf_s("%d", &k);
	void k_reverse(str, k);
	printf("%s", str);
	return 0;
}
void k_reverse(char* str, int k) {
	char* left = str, * right = str + 2, tmp;
	int len = strlen(str);
	while(right<=len) {
		while (left <= right) {
			tmp = *left;
			*left = *right;
			*right = tmp;
			left++; right--;
		}
		left += k; right += k;
	}
}