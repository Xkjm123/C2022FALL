#include<stdio.h>
int is_sorted(int arr[], int left, int right);
int left, right;
int main() {
	int a[100], i,n,t;
	scanf("%d %d\n",&left,&right);
	scanf("%d\n", &n);
	if (left<0 || left>n || right<0 || right>n||right<left) {
		printf("Error.\n");
		goto end;
	}
	for (i = 0; i < n; i++) {
		scanf("%d ",&a[i]);
	}
	t=is_sorted(a[100], left, right);
	if (t == 1)printf("是非严格单调递增数列。\n");
	else printf("不是非严格单调递增数列。\n");
end:
	return 0;
}
int is_sorted(int arr[], int left, int right) {
	for (int i = left+1; i <= right; i++) {
		if (arr[i] < arr[i - 1]) {
			return -1;
		}
	}
	return 1;
}