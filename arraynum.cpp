#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� : �迭num[2][3] �� ���� �׸��� ���� �����Ű�� ���� ����ϴ� �������� �����ڵ带 �ۼ��Ͻÿ�.

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