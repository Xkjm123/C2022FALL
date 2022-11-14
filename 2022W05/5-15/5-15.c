#include<stdio.h>
void quickSort(int* p, int left, int right)
{
	if (left >= right)
		return;
	int pivot = p[left];
	int i = left, j = right;
	while (i < j)
	{
		while (i < j && p[j] >= pivot)
			j--;
		p[i] = p[j];
		while (i < j && p[i] < pivot)
			i++;
		p[j] = p[i];
	}
	p[i] = pivot;
	quickSort(p, left, i - 1);
	quickSort(p, i + 1, right);
}
int main()
{
	int a[100005], i, n;
	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%d ", &a[i]);
	}
	quickSort(a, 0, n - 1);
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}
