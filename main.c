#include <stdio.h>
#include <stdlib.h>

#define DIMENSION 3


/** Fraction struct:
 *  
 *  Components: numerator
 * 				denominator
 */

struct _fraction {
	int n;
	int d;
};

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ END FRACTION
enum _symbolic { PI, e };

double getValueOfSymbolicConstant(enum _symbolic symbol);

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ END SYMBOLIC

union _component {
	struct _fraction;
	int whole;
	double decimal;
	enum _symbolic symbol;
};

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ END COMPONENT

struct _number {
	union _component real;
	union _component complex;
};

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ END NUMBER

struct _matrix {
	int m[DIMENSION][DIMENSION];
};

struct _matrix* createMatrix();
void setMatrix(struct _matrix *m, int n);
void printMatrix(struct _matrix *m);
void freeMatrix(struct _matrix *m);

void matrix(int n);

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ ENDMATRIX
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ *****************
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ * START PROGRAM *
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ *****************

int main()
{
	
	
	return EXIT_SUCCESS;
}

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ END PROGRAM 

double getValueOfSymbolicConstant(enum _symbolic symbol) {
	return 0.0;
}

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ END SYMBOLIC

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

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ END MATRIX