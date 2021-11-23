#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//배열 even[4][5]에 다음과 같이 기억시키는 순서도이다. 빈칸을 채워 완성하시오.

void main() {
	int even[4][5], k = 2;
	int i, j, sw = 0;
	for (i = 0; i < 4; i = i + 1) {
		if (sw == 1) {
			for (j = 0; j < 5; j++) {
				even[i][j] = k;
				sw = 0;
				k = k + 2;
				printf("%d ", even[i][j]);
			}
		}
		else if (sw == 0) {
			for (j = 4; j >= 0; j--) {
				even[i][j] = k;
				sw = 1;
				k = k + 2;
				printf("%d ", even[i][j]);
			}
		}
		printf("\n");
	}
}