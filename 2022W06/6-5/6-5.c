#include<stdio.h>
#include<string.h>
int substr(const char* str, const char* substr);
int main() {
	int i, istr;
	char str[105], sstr[105];
	gets(str);
	gets(sstr);
	istr = substr(str,sstr);
	printf("%d",istr);
	return 0;
}
int substr(const char str[], const char substr[]) {
	int flag = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (flag == 0 && str[i] == substr[flag]) {
			flag++; continue;
		}
		if (flag > 0 && str[i] == substr[flag]) {
			flag++;
			if (flag == strlen(substr)) {
				return i - flag + 1;
			}
			continue;
		}
		flag = 0;
	}
	return -1;
}