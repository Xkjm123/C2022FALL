#include<stdio.h>
#include<string.h>
int my_strcmp(const char* str1, const char* str2);
int main() {
	char str1[100], str2[100];
	gets(str1);
	gets(str2);
	int flag=my_strcmp(str1, str2);
	printf("%d",flag);
	return 0;
}
int my_strcmp(const char* str1, const char* str2) {
	while (*str1 == *str2) {
		if (*str1 == '\0')return 0;
		else {
			str1++; str2++;
		}
	}
	if (*str1 < *str2)return -1;
	else return 1;
}