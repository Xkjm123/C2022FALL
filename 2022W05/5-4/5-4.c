#include<stdio.h>
#include<time.h>
void InsertionSort(int arr[], int left, int right);
void InsertAt(int a[], int n, int k, int x);
int a[50];
int i,j;
int left, right;
int main() {
	scanf_s("%d %d",&left,&right);
	if (left < 0 || left >= 50 || right < 0 || right>50 || right < left) {
		printf("Error.\n");
		goto end;
	}
	srand(time(NULL));
	for (i = 0; i < 50; i++) {
		a[i] = rand() % 100;
	}
	printf("生成的数组为：\n");
	for (i = 0; i < 50; i++) {
		if (i % 10 == 0&&i>0)printf("\n");
		printf("%d\t ",a[i]);
	}
	InsertionSort(a, left, right);
	printf("排序后的子数列为：\n");
	for (i = left; i <= right; i++) {
		if (i % 10 == 0 && i > 0)printf("\n");
		printf("%d\t",a[i]);
	}
end:
	return 0;
}
void InsertionSort(int arr[], int left, int right) {
	for (int i = left + 1; i <= right; i++) {
		int tmp = a[i];
		for (int j = i - 1; j >= left; j--) {
			if (a[j] > tmp) {
				a[j + 1] = a[j];
				a[j] = tmp;
			}
			else break;
		}

	}
}
