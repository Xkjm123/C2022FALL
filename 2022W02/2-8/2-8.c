#include <stdio.h>
#include <time.h>
#include<math.h>
int main() {
	clock_t start_clock, end_clock;
	double elapsed_time;
	int i;
	int a, b, c;
	long long int outc=1;
	scanf("%d %d %d", &a, &b, &c);
	start_clock = clock();
	for (i = 1; i <= 10000000; ++i) {
		for (int j = 1; j < b; j++) {
			outc *= a;
		}
		//outc = pow(a, b);
		outc = outc % c;
	}
	printf("%lld\n", outc);
		end_clock = clock();
	elapsed_time = (double)(end_clock - start_clock) / CLOCKS_PER_SEC;
	printf("%.6lf", elapsed_time);
	return 0;
}