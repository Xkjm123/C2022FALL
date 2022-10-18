#include<stdio.h>
#include<math.h>
int main() {
	int a,b,c;
	long long int outc;
	scanf("%d %d %d",&a,&b,&c);
	outc = pow(a, b);
	outc = outc % c;
	printf("%lld",outc);
	return 0;
	
}