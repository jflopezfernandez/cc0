
#include "includes\Main.h"

struct _fraction {
	int n;
	int d;
};


union _numtype {
	struct _fraction frac;
	double decimal;
	int integer;
};


struct _number {
	union _numtype number;
};


int main()
{
	
	
	return EXIT_SUCCESS;
}