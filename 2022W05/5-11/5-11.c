#include<stdio.h>
#include<string.h>
void my_strcpy(char* dest, const char* src);
int main() {
	char str[10000] ;
	gets(str);
	char str1[10000];
	my_strcpy(str1, str);
	for (int i = 0; i < strlen(str); i++) {
		printf("%c",str1[i]);
	}
	return 0;
}
void my_strcpy(char* dest, const char* src) {
	while (*src) {
		*dest++ = *src++;
	}
}
