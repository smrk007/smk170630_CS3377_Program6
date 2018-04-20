// Sean Kennedy smk170630

#include <iostream>
#include <cdk.h>

#define MATRIX_WIDTH 3
#define MATRIX_HEIGHT 3
#define BOX_WIDTH 15
#define MATRIX_NAME_STRING "Test Matrix"

using namespace std;

int main() {

	WINDOW *window;
	CDKSCREEN *cdkscreen;
	CDKMATRIX *myMatrix;

	const char *rowTitles[MATRIX_HEIGHT+1] = {"R0","R1","R2","R3"};
	const char *columnTitles[MATRIX_WIDTH+1] = {"C0","C1","C2","C3"};
	int boxWidths[MATRIX_WIDTH+1] = {BOX_WIDTH,BOX_WIDTH,BOX_WIDTH,BOX_WIDTH};
	int boxTypes[MATRIX_WIDTH+1] = {vMIXED,vMIXED,vMIXED,vMIXED};

	// Initialize Screen
	window = initscr();
	cdkscreen = initCDKScreen(window);
	
	// Start Colors
	initCDKColor();

	// Create the Matrix
	myMatrix = newCDKMatrix(	cdkscreen, CENTER, CENTER, MATRIX_WIDTH, MATRIX_HEIGHT, MATRIX_WIDTH, MATRIX_HEIGHT, MATRIX_NAME_STRING, (char **) columnTitles, (char **) rowTitles, boxWidths, boxTypes, 1, 1, ' ', ROW, true, true, false);

	if (myMatrix == NULL) {
		printf("ERROR: Failure to create matrix.\n");
		_exit(1);
	}

	// Display the Matrix
	drawCDKMatrix(myMatrix, true);

	// Display a message
	setCDKMatrixCell(myMatrix, 2, 2, "Test Message");
	drawCDKMatrix(myMatrix, true);

	// To see results
	sleep(10);

	endCDK();

	return 0;
}
