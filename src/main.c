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

void printFraction(struct _fraction *f);

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ END FRACTION
enum _symbolic { PI, e, x, y };

double getValueOfSymbolicConstant(enum _symbolic symbol);
void printSymbolicConstant(enum _symbolic symbol);

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ END SYMBOLIC

union _component {
	struct _fraction;
	int whole;
	double decimal;
	enum _symbolic symbol;
};

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ END COMPONENT

enum _numberType { FRACTION, WHOLE, DECIMAL, SYMBOLIC };

struct _number {
	union _component real;
	enum _numberType realType;
	
	union _component complex;
	enum _numberType complexType;
};

void printNumber(struct _number *n);

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

/** TODO: Implement equation as a linked list? */

struct _number getGCD(struct _number *n1, struct _number *n2);

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ *****************
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ * START PROGRAM *
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ *****************

int main()
{
	struct _number n1;
	n1.realType = WHOLE;
	n1.real.whole = 1071;
	
	struct _number n2;
	n2.realType = WHOLE;
	n2.real.whole = 462;
	
	struct _number gcd = getGCD(&n1,&n2);
	
	printf("gcd(%i,%i)=%i\n",n1.real.whole,n2.real.whole,gcd.real.whole);
	
	return EXIT_SUCCESS;
}

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ END PROGRAM


void printFraction(struct _fraction *f) {
	if (f->n == 0) {
		printf("0 ");
	} else if (f->d == 1) {
		printf("%i ", f->n);
	} else {
		printf("%i/%i ", f->n, f->d);
	}
}

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ END FRACTION

double getValueOfSymbolicConstant(enum _symbolic symbol) {
	if (symbol == PI) {
		return ((double) 22 / (double) 7);
	} else if (symbol == e) {
		return (2.72);
	}
	
	return 0.0;
}


void printSymbolicConstant(enum _symbolic symbol) {
	if (symbol == PI) {
		printf("pi");
	} else if (symbol == e) {
		printf("e");
	} else if (symbol == x) {
		printf("x");
	} else if (symbol == y) {
		printf("y");
	} else {
		printf("[unknown symbolic constant]");
	}
}

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ END SYMBOLIC

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ END COMPONENT

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ END NUMBER

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


struct _number getGCD(struct _number *n1, struct _number *n2) {
	struct _number gcd;
	gcd.real.whole = -1;
	
	if ((n1->realType != WHOLE) && (n2->realType != WHOLE)) {
		printf("Cannot compute GCD for non-integral types!\n");
		
		return gcd;
	}

	int m = n1->real.whole;
	int n = n2->real.whole;
	int r = m % n;
	
	while (r != 0) {
		m = n;
		n = r;
		
		r = m % n;
	}
	
	gcd.realType = WHOLE;
	gcd.real.whole = n;
	
	return gcd;
}