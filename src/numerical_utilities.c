
#include "includes\Main.h"


struct _number getGCD(struct _number *n1, struct _number *n2) {
	struct _number gcd;
	*(gcd.real->whole) = -1;
	
	if ((*(n1->realType) != WHOLE) && (*(n2->realType) != WHOLE)) {
		printf("Cannot compute GCD for non-integral types!\n");
		
		return gcd;
	}

	int m = *(n1->real->whole);
	int n = *(n2->real->whole);
	int r = m % n;
	
	while (r != 0) {
		m = n;
		n = r;
		
		r = m % n;
	}
	
	*(gcd.realType) = WHOLE;
	*(gcd.real->whole) = n;
	
	return gcd;
}