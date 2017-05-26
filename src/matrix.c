
#include "includes\Main.h"


struct _matrix* createMatrix() {
	struct _matrix *newMatrix = malloc(sizeof(struct _matrix));
	
	return newMatrix;
}


void setMatrix(struct _matrix *m, int n) {
	for (int i = 0; i < DIMENSION; ++i) {
		for (int j = 0; j < DIMENSION; ++j) {
			m->m[i][j] = n;
		}
	}
}


void freeMatrix(struct _matrix *m) {
	free(m);
}


void printMatrix(struct _matrix *m) {
	for (int i = 0; i < DIMENSION; ++i) {
		for (int j = 0; j < DIMENSION; ++j) {
			printf("%i ", m->m[i][j]);
		}
		
		printf("\n");
	}
}


void matrix(int n) {
	struct _matrix *m = createMatrix();
	setMatrix(m,n);
	printMatrix(m);
	freeMatrix(m);
}