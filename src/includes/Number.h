#ifndef _NUMBER_H
#define _NUMBER_H


enum _numberType { FRACTION, WHOLE, DECIMAL, SYMBOLIC };

struct _number {
	union _component *real;
	enum _numberType *realType;
	
	union _component *complex;
	enum _numberType *complexType;
};

void printNumber(struct _number *n);



#endif /* _NUMBER_H */