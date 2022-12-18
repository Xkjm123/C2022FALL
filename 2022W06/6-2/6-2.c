#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int bin_insert(int n, int m, int j, int i);
int binarr_to_deci(int a[]);
void deci_to_binarr(long int a, int b[]);
int lt1[100] = { 0 }, lt2[100] = { 0 }, input[100], output[100];
int main() {
	long int n, m;
	int outc, i, j;
	scanf("%ld %ld %d %d\n", &n, &m, &j, &i);
	outc=bin_insert(n, m, j, i);
	printf("%d",outc);
	return 0;
}
void deci_to_binarr(long int a, int n[]) {
	int i = 0;
	while (a >= 10) {
		n[i] = a % 2;
		a /= 2;
		i++;
	}
	n[i] = a;
}
int binarr_to_deci(int a[]) {
	int len = sizeof(a) / sizeof(int), j = 0,sum=0;
	for (int i = len; i >= 0; i--) {
		sum += (int)pow(2, j)*a[i];
		j++;
	}
	return sum;
}
int bin_insert(int n, int m, int j, int i) {
	int s;                      //      j    j
	deci_to_binarr(n, lt1);//1024  0000 0000 001
	deci_to_binarr(m, lt2);//19         11 001
	int len = sizeof(lt2) / sizeof(int);
		for (s = 0; s < len; s++) {
			lt1[j] = lt2[s];                        
			j++;                  //       0011 0010 001
		}
		int len2 = sizeof(lt1) / sizeof(int);
		for (i = 0; i < len2; i++) {
			output[i] = lt1[len2 - 1];    //-->100 0100 1100
			len2--;
		}
		return binarr_to_deci(output);
}