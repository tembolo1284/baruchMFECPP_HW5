#include <iostream>
#include <stdio.h>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"
#include "Shape.hpp"

using namespace std;
using namespace PAULLOPEZ::CAD;
using namespace PAULLOPEZ::CONTAINERS;
namespace PLC = PAULLOPEZ::CAD;
namespace PLCN = PAULLOPEZ::CONTAINERS;

void print(const Point& pnt) {
	cout << "Your point is: (" << pnt.X() << "," << pnt.Y() << ")" << endl;
}
void print(const Line& l) {
	l.start();
	l.end();
}
void print(const Circle& c) {
	cout << endl << "Radius is: " << c.rad() << endl;
	Point pnt = c.ctr();
	cout << "X coordinate of center is: " << pnt.X() << endl ;
	cout << "Y coordinate of center is: " << pnt.Y() << endl;
}
int main() {
	Shape s; // Create shape.
	Point p(10, 20); // Create point.
	Line l(Point(1, 2), Point(3, 4)); // Create line.
	Circle c(2.0, p);
	Shape* sp1; // Create pointer to a shape variable.
	Shape* sp2;
	Shape* sp3;
	sp1 = &p; // Point in a shape variable. 
	sp2 = &l; // pointing to a line variable
	sp3 = &c; // pointing to a circle variable
	cout << "Point ToString call: " << sp1->ToString() << endl;  //I get ID and point now.
	cout << "Line ToString call: " << sp2->ToString() << endl;  //I get ID and line ToString now.
	cout << "Cirlce ToString call: " << sp3->ToString() << endl;  //I get ID and Cirlce ToString now.  I like it!
														
return 0;

}