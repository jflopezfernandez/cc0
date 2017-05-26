#ifndef _SOLVER_H
#define _SOLVER_H


struct _variable {
	char representation;
};

void printVariable(struct _variable *v);

union _element {
	struct _number *n;
	struct _matrix *m;
};

struct _elementNode {
	struct _elementNode *next;
	struct _elementNode *previous;
	
	
};



#endif /* _SOLVER_H */