#include <iostream>
#include <stdio.h>
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"
#include "Shape.hpp"
#include "ArrayException.hpp"

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
	Array arr;
	Point p1;
	Point p2(2.1, 3.2);
	Point p3(3, -1);
	try {
		arr.SetElement(p1, 1);
		print(arr.GetElement(1)); //retrieves point(0,0) correctly
		//arr.SetElement(p2, 12); // throws because there is no index 12
		arr.GetElement(13); // throws because there is no index 13
	}
	catch (ArrayException& ae) {
		cout << "An Array Exception has occurrred." << endl << ae.GetMessage();
	}
	//catch (OutOfBoundsException& ob) {
	//	cout << "An exception has occurrred." << endl << ob.GetMessage();
	//}
	catch (...) {
		cout << "An unhandled exception has occurred.";
	}


	return 0;


}