#include<stdio.h>
void print_hex(int a) {
    char arr[] = "0123456789ABCDEF";
    char hex[16];
    int i = 0;
    int j = 0;
    int num = 0;
    num=a;
    while (num)
    {
        hex[i++] = arr[num % 16];  
        num = num / 16;
    }
    for (j = i - 1; j >= 0; --j)
        printf("%c", hex[j]);
}
int main() {
	int a;
	scanf("%d",&a);
	print_hex(a);
	return 0;
}