#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//문제 : 2차원 배열 TBL에 다음과 같은 내용을 기억시키는 순서도를 작성하라

void main() {
	int num[5][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
	int i, j;
	for (i = 0; i < 5; i = i + 1) {
		for (j = 0; j < 5; j = j + 1) {
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}
}