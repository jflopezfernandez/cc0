#ifndef _COMPONENT_H
#define _COMPONENT_H


union _component {
	struct _fraction *fraction;
	int *whole;
	double *decimal;
	enum _symbolic *symbol;
};



#endif /* _COMPONENT_H */