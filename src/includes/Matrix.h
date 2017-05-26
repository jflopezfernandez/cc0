#ifndef _MATRIX_H
#define _MATRIX_H

#define DIMENSION 3


struct _matrix {
	int m[DIMENSION][DIMENSION];
};

struct _matrix* createMatrix();
void setMatrix(struct _matrix *m, int n);
void printMatrix(struct _matrix *m);
void freeMatrix(struct _matrix *m);

void matrix(int n);



#endif /* _MATRIX_H */