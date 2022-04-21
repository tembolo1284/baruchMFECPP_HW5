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
	Point p(10, 20); // Create point.
	Line l(Point(1, 2), Point(3, 4)); // Create line.
	Circle c(2.0, p);
	Shape* sp1; // Create pointer to a shape variable.
	Shape* sp2;
	Shape* sp3;
	sp1 = &p; // Point in a shape variable. 
	sp2 = &l; // pointing to a line variable
	sp3 = &c; // pointing to a circle variable
	sp1->Print();  //I get ID and point now.
	sp2->Print();  //I get ID and line ToString now.
	sp3->Print();  //I get ID and Cirlce ToString now.

	//The correct info is printing even though the derived classes don't have the Print function. 
return 0;

}