
#include "includes\Main.h"

#define MAX_PRECISION 12000
char aSample[MAX_PRECISION+1];

int cAdd(char *aOne, char *aTwo, char *aThree);


int main()
{
	initializeProgram();
	/** Start Program */
	
	
	
	
	return EXIT_SUCCESS;
}


int cAdd(char *aOne, char *aTwo, char *aThree) {
	int iStatus = 0;
	int carry = 0;
	int j = 0;
	
	for (int i = MAX_PRECISION - 1; i >= 0; i--) {
		j = *(aOne+i) + *(aTwo+i) + carry - '0' - '0';
		carry = j / 10;
		j = j % 10;
		*(aThree+i) = j + '0';
	}
	
	return iStatus;
}