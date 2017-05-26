
#include "includes\Main.h"


double getValueOfSymbolicConstant(enum _symbolic symbol) {
	if (symbol == PI) {
		return ((double) 22 / (double) 7);
	} else if (symbol == e) {
		return (2.72);
	}
	
	return 0.0;
}


void printSymbolicConstant(enum _symbolic symbol) {
	if (symbol == PI) {
		printf("pi");
	} else if (symbol == e) {
		printf("e");
	} else if (symbol == x) {
		printf("x");
	} else if (symbol == y) {
		printf("y");
	} else {
		printf("[unknown symbolic constant]");
	}
}