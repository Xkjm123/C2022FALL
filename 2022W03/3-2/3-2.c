#include<stdio.h>
void triangle_judge(int a, int b, int c) {
	int max = a;
	if (b > max)max = b;
	if (c > max)max = c;
	if ((a + b) > max && (b + c) > max && (a + c) > max) {
		if (a == b && b == c)printf("�������ǵȱ������Ρ�");
		else if (a == b || b == c || a == c)printf("�������ǵ��������Ρ�");
		else printf("����������ͨ�����Ρ�");
	}
	else printf("�����������Ρ�");
}
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	triangle_judge(a, b, c);
	return 0;
}