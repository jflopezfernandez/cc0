#ifndef _FRACTION_H
#define _FRACTION_H

struct _fraction {
	int *n;
	int *d;
};

void printFraction(struct _fraction *f);


#endif /* _FRACTION_H */