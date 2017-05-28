
#include "includes\Main.h"

void printMatrix(struct _matrix *m);


int main()
{
	initializeProgram();
	/** Start Program */
	
	struct _matrix m;
	int count = 0;
	int j = 0;
	
	for (int i = 0; i < DIMENSION; ++i) {
		for (int j = 0; j < DIMENSION; ++j) {
			m.m[i][j] = ++count;
		}
	}
	
	
	
	
	return EXIT_SUCCESS;
}


void printMatrix(struct _matrix *m) {
	for (int i = 0; i < DIMENSION; ++i) {
		for (int j = 0; j < DIMENSION; ++j) {
			#if FLP
				printf("%f ", m->m[i][j]);
			#else
				printf("%i ", m->m[i][j]);
			#endif
		}
	}
}