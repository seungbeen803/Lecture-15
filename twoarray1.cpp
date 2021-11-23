#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num[5][5];
	int i, j, count = 1;
	for (i = 0; i < 5; i = i + 1) {
		for (j = 0; j < 5; j = j + 1) {
			num[i][j] = count;
			count = count + 1;
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}
}