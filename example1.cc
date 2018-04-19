// Sean Kennedy smk170630

#include <iostream>
#include <cdk.h>

#define MATRIX_WIDTH 3
#define MATRIX_HEIGHT 3
#define BOX_WIDTH 15
#define MATRIX_NAME_STRING "Test Matrix"

int main() {

	WINDOW *window;
	CDKSCREEN *cdkscreen;
	CDKMATRIX *myMatrix;

	const char *rowTitles[MATRIX_HEIGHT+1] = {"R0","R1","R2","R3"};
	const char *columnTitles[MATRIX_WIDTH+1] = {"C0","C1","C2","C3"};
	int boxWidths[MATRIX_WIDTH+1] = {BOX_WIDTH,BOX_WIDTH,BOX_WIDTH,BOX_WIDTH};
	int boxTypes[MATRIX_WITDH+1] = {vMIXED,vMIXED,vMIXED,vMIXED};

	// Initialize Screen
	window = initscr();
	cdkscreen = initCDKScreen(window);
	
	// Start Colors
	initCDKColor();

	// Create the Matrix
	my Matrix = newCDKMatrix

	return 0;
}
