
#include "includes\Main.h"


void printFraction(struct _fraction *f) {
	if (*(f->n) == 0) {
		printf("0 ");
	} else if (*(f->d) == 1) {
		printf("%i ", *(f->n));
	} else {
		printf("%i/%i ", *(f->n), *(f->d));
	}
}