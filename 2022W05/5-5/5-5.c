#include<stdio.h>
#include<time.h>
void SelectionSort(int arr[], int left, int right);
void swap(int, int);
int a[50];
int i, j,k;
int left, right;
int main() {
	scanf_s("%d %d", &left, &right);
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
		if (i % 10 == 0 && i > 0)printf("\n");
		printf("%d\t ", a[i]);
	}
	SelectionSort(a, left, right);
	printf("排序后的子数列为：\n");
	for (i = left; i <= right; i++) {
		if (i % 10 == 0 && i > 0)printf("\n");
		printf("%d\t", a[i]);
	}
end:
	return 0;
}
void SelectionSort(int arr[], int left, int right) {
	int i, j;
	for (i = left; i <= right; i++)
	{
		int min = i;
		for (j = i + 1; j <= right; j++)
			if (arr[j] < arr[min])
				min = j;
		k = arr[min];
		arr[min] = arr[i];
		arr[i] = k;
	}
}