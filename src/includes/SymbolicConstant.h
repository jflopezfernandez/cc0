#ifndef _SYMBOLIC_CONSTANT_H
#define _SYMBOLIC_CONSTANT_H


enum _symbolic { PI, e, x, y };

double getValueOfSymbolicConstant(enum _symbolic symbol);
void printSymbolicConstant(enum _symbolic symbol);


#endif /* _SYMBOLIC_CONSTANT_H */