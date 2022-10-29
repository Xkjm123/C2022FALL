#include<stdio.h>
#include<string.h>
void reverse() {
    char a[100];
    gets(a);
    int length = strlen(a);
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", *(a + i));
    }
}
int main() {
	reverse();
	return 0;
}