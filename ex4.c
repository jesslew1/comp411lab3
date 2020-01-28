#include <stdio.h>

int main() {
	
	int A[3][3]; // matrix A
	int B[3][3]; // matrix B
	int C[3][3]; // matrix C

	printf("Please enter 9 values for matrix A:\n");

	for (int i = 1; i < 4; i++) {
		for (int j = 1; j < 4; j++) {
				scanf("%d", &A[i][j]);
		}
	}

	printf("Please enter 9 values for matrix B:\n");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	printf("C = B + A =\n");
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			C[i][j] = B[i][j] + A[i][j];
			printf("%*d", C[i][j], 10);
		}
		printf("\n");
	}



}