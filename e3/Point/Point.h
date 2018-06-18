#ifndef point
#define point

#include <iostream>
using namespace std;

class Point{				// Delaration Point Class
	int x,y;					// Properties: x ve y coordinates
 public:
	void move(int, int);	// A function to move points
	void print();			// to prints cordinates on the screen
	bool is_zero();		    // is point on the zero point(0,0)
};

#endif
