
#include "includes\Main.h"


#define DIMENSION 	20
#define RANGE 		10


int getGCD(int m, int n);


struct _number {
	int num;
	int den;
};

struct _number newNumber(int a, int b);
void simplify(struct _number *n);
void printNumber(struct _number *n);

struct _matrix {
	struct _number m[DIMENSION][DIMENSION];
};


void setZeroMatrix(struct _matrix *m);
void setIdentityMatrix(struct _matrix *m);
void setRandMatrix(struct _matrix *m);
void printMatrix(struct _matrix *m);


int main()
{
	initializeProgram();
	/** Start Program */
	
	for (int i = 0; i < DIMENSION; ++i) {
		for (int j = 0; j < DIMENSION; ++j) {
			struct _number n = newNumber(i,j);
			printNumber(&n);
			printf("\n");
		}
	}
	
	
	return EXIT_SUCCESS;
}


int getGCD(int m, int n) {
	int r = m % n;
	
	while (r != 0) {
		m = n;
		n = r;
		
		r = m % n;
	}
	
	return n;
}


struct _number newNumber(int a, int b) {
	struct _number newNumber;
	
	newNumber.num = a;
	newNumber.den = b;
	
	simplify(&newNumber);
	
	return newNumber;
}


void simplify(struct _number *n) {
	int gcd = getGCD(n->num, n->den);
	
	if (gcd > 1) {
		n->num /= gcd;
		n->den /= gcd;
	}
}


void printNumber(struct _number *n) {
	//simplify(n);
	
	if (n->den == 0) {
		printf("  NaN ");
	} else {
		if (n->num == 0) {
			printf("%5i ", n->num);
		} else if (n->den == 1) {
			printf("%5i ", n->num);
		} else {
			printf("%2i/%2i ", n->num, n->den);
		}
	}
}


void setZeroMatrix(struct _matrix *m) {
	for (int i = 0; i < DIMENSION; ++i) {
		for (int j = 0; j < DIMENSION; ++j) {
			//m->m[i][j].num = 0;
		}
	}
}


void setIdentityMatrix(struct _matrix *m) {
	for (int i = 0; i < DIMENSION; ++i) {
		for (int j = 0; j < DIMENSION; ++j) {
			if (i == j) {
				m->m[i][j].num = 1;
				m->m[i][j].den = 1;
			} else {
				m->m[i][j].num = 0;
				m->m[i][j].den = 1;
			}
		}
	}
}


void setRandMatrix(struct _matrix *m) {
	const int range = RANGE;
	srand(13);
	
	for (int i = 0; i < DIMENSION; ++i) {
		for (int j = 0; j < DIMENSION; ++j) {
			m->m[i][j].num = (rand() % range);
			m->m[i][j].den = (rand() % range);
		}
	}
}


void printMatrix(struct _matrix *m) {
	for (int i = 0; i < DIMENSION; ++i) {
		for (int j = 0; j < DIMENSION; ++j) {
			printNumber(&(m->m[i][j]));
			printf(" | ");
		}
		
		printf("\n\n");
	}
}