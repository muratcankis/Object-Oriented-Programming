#include "Point.h"

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    Point point1,point2;			// 2 object are defined: point1 and point2
	point1.move(100,50);			// point1 moves to (100,50)
	point1.print();				// point1's coordinates to the screen
	point1.move(20,65);			// point1 moves to (20,65)
	point1.print();				// point1's coordinates to the screen
	if(point1.is_zero())			// is point1 on (0,0)?
		cout << "point1 is now on zero point(0,0)" << endl;
	else
		cout << "point1 is NOT on zero point(0,0)" << endl;
	point2.print();		
	point2.move(0,0);				// point2 moves to (0,0)
	point2.print();	
	if(point2.is_zero())			// is point2 on (0,0)?
		cout << "point2 is now on zero point(0,0)" << endl;
	else
		cout << "point2 is NOT on zero point(0,0)" << endl;
	system("pause");	
	return 0;
}
