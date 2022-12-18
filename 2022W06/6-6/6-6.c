#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int count_substr(const char* str, const char* substr);
int main() {
	char str[100], substr[100];
	gets(str); gets(substr);
	int cnt=count_substr( str,  substr);
	printf("%d",cnt);
	return 0;
}
int count_substr(const char str[], const char substr[]) {
	int cnt=0,k = 0, i, j;
	for (i = 0; str[i] != '\0'; i++) {
		if (k == 0 && str[i] == substr[k]) {
			k++; 
			continue;
		}
		if (k > 0 && str[i] == substr[k]) {
			k++;
			if (k == strlen(substr)) {
				cnt++; k = 0; 
			}
			continue;
		}
		k = 0;
	}
	return cnt;
}