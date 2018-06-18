#include "Point.h"
// ***** Bodies of Member Functions *****

// A function to move the points 
void Point::move(int new_x, int new_y)
{
	x = new_x;				// assigns new value to x coordinat
	y = new_y;				// assigns new value to y coordinat 
}

// To print the coordinates on the screen 
void Point::print()
{
	cout << "X= " << x << ", Y= " << y << endl;
}
				
// is the point on the zero point(0,0)
bool Point::is_zero()
{
	return (x == 0) && (y == 0);	  
}
