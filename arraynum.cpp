#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//문제 : 배열num[2][3] 에 다음 그림과 같이 저장시키고 값을 출력하는 순서도와 슈도코드를 작성하시오.

void main() {
	int num[2][3] = { 0, 1, 2, 3, 4, 5 };
	int i, j;
	for (i = 0; i < 2; i = i + 1) {
		for (j = 0; j < 3; j = j + 1) {
			printf("%d", num[i][j]);
		} 
		printf("\n");
	} 
}