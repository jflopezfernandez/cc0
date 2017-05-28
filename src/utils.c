
#include "includes\Main.h"


void clearScreen() {
	system("cls");
}


void printLines(int n) {
	printf("\n");
	
	for (int i = 0; i < n; ++i) {
		printf("\n");
	}
}


void printCompilationInfo() {
	printf("Compiled on %s, at %s\n", __DATE__, __TIME__);
}


void printCStdVersion() {
	printf("C Standard: %li\n", __STDC_VERSION__);
}


void initializeProgram() {
	clearScreen();
	printCompilationInfo();
	printCStdVersion();
	printLines(2);
}