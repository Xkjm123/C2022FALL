#include<stdio.h>
#include<time.h>
void BubbleSort(int , int , int );
int i, j,t;
int main() {
	int a[50], left, right;
	void BubbleSort(a[50], left, right);
	return 0;
}
void BubbleSort(int arr[], int left, int right) {
	int left, right;
	int a[50];
	srand(time(NULL));
	for (i = 0; i < 50; i++) {
		a[i] = rand() % 100;
	}
	scanf("%d %d\n", &left, &right);
	if (left < 0 || left >= 50 || right < 0 || right>50 || right < left) {
		printf("Error.\n");
		goto end;
	}
	for (i = left; i <= right; i++) {
		for (j = left; j <= right; j++) {
			if (arr[j] > arr[j + 1]) {
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
end:
	
}