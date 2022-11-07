//https://www.acwing.com/blog/content/27763/
#include<stdio.h>
int main() {
	int cnt = 0, i;
	char ch[100], ch1[100];
	scanf("%c", &ch[cnt]);
	while (ch[cnt] != '\n') {
		cnt++;
		scanf("%c", &ch[cnt]);
	}
	for (i = 0; i < cnt - 1; i++) {
		ch1[i] = ch[i] + ch[i + 1];
	}
	ch1[cnt - 1] = ch[cnt - 1] + ch[0];
	for (int j = 0; j < cnt; j++) {
		printf("%c", ch1[j]);
	}
	return 0;
}