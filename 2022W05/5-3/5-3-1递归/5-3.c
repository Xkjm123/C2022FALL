#include<stdio.h>
#include<stdio.h>
int binary_search_recursive(int arr[], int left, int right, int query);
int i, j, t,mid;
int main() {
	int a[50], left, right, query,iquery;
	srand(time(NULL));
	for (i = 0; i < 50; i++) {
		scanf("%d ",&a[i]);
	}
	scanf("%d %d %d",&left,&right,&query);
	if (left < 0 || left >= 50 || right < 0 || right>50 || right < left) {
		printf("Error.\n");
		goto end;
	}
	iquery = binary_search_recursive(a, left, right, query);
	if (iquery == -1)printf("未找到。\n");
	else printf("query对应数组下标为：%d",iquery);
end:
	return 0;
}
int binary_search_recursive(int arr[], int left, int right, int query) {
	mid = left + (right - left) / 2;
	if (right == left) {
		if (query == arr[left])return left;
		else
			return -1;
	}
	if (query == arr[mid])return mid;
	else if (query < arr[mid]) {
		return binary_search_recursive(arr, left, mid, query);
	}
	else if (query > arr[mid]) {
		return binary_search_recursive(arr, mid, right, query);
	}
}