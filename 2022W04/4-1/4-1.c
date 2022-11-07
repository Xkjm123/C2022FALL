#include<stdio.h>
void move(int,char a, char c);
void hanoi(int n, char a, char b, char c);
int cnt = 0;
int main() {
	hanoi(6, 'A', 'B', 'C');
	printf("%d",cnt);
	return 0;
}
void move(char a, char c) {
	printf("%c->%c\n", a, c);
	cnt++;
}
void hanoi(int n, char a, char b, char c) {
	if (n == 1)move(a, c);
	else {
		hanoi(n - 1, a, c, b);
		move(a, c);
		hanoi(n - 1, b, a, c);
	}
}