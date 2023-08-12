// C program to draw a house using
// graphics.h library
#include <conio.h>
#include <graphics.h>
#include <stdio.h>

// Driver Code
void main()
{
	// Initialize of gdriver with
	// DETECT macros
	int gdriver = DETECT, gmode;

	// Initialize structure of
	// the house
	initgraph(&gdriver, &gmode, "");

	// Create lines for structure
	// of the House
	line(100, 100, 150, 50);

	line(150, 50, 200, 100);

	line(150, 50, 350, 50);
	line(350, 50, 400, 100);

	// Draw rectangle to give proper
	// shape to the house
	rectangle(100, 100, 200, 200);
	rectangle(200, 100, 400, 200);
	rectangle(130, 130, 170, 200);
	rectangle(250, 120, 350, 180);

	// Set color using setfillstyle()
	// which take style and color as
	// an argument
	setfillstyle(2, 3);

	// Fill the shapes with colors white
	floodfill(131, 131, WHITE);
	floodfill(201, 101, WHITE);

	// Change the filling color
	setfillstyle(11, 7);

	// Fill the shapes with changed colors
	floodfill(101, 101, WHITE);
	floodfill(150, 52, WHITE);
	floodfill(163, 55, WHITE);
	floodfill(251, 121, WHITE);

	// Close the initialized gdriver
	closegraph();
}
