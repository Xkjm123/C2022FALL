#include<stdio.h>
#include<string.h>
int my_strlen(const char* str);
int main() {
	char str[]="crvfedetbsd";
	int len = my_strlen(str);
	printf("%d %d", len, strlen(str));
	return 0;
}
my_strlen(const char* str) {
	int cnt = 0;
	while (*str) {
		str++;
		cnt++;
	}
	return cnt;
}
