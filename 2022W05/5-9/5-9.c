#include<stdio.h>
#include<string.h>
int main() {
	char* city[] = { "nanjing","wuxi","suzhou","xuzhou","changzhou" };
	char* tmp = NULL;
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 1 + i; j < 5; j++) {
			if (strcmp(city[j], city[i]) < 0) {
				tmp = city[j];
				city[j] = city[i];
				city[i] = tmp;
			}
		}
	}
	return 0;
}