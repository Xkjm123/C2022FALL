#include<stdio.h>
int binary_search_iterative(int arr[], int left, int right, int query)
{
	int mid = (left + right) / 2;
	if (left < right)
	{
		if (arr[mid] == query)
			return mid;
		else if (arr[mid] > query)
			return binary_search_iterative(arr, left, mid, query);
		else
			return binary_search_iterative(arr, mid + 1, right, query);
	}
	else
		return -1;
}
int main()
{
	int arr[10] = { 1,3,4,5,8,9,10,15,26,30 };
	int query = 10;
	int left = 0;
	int right = 7;
	int p = binary_search_iterative(arr, left, right, query);
	printf("%d", p);
	return 0;
}
