#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Shape {
private:
	int id;
public:
	Shape(); //constructor
	Shape(const Shape& s); //copy constructor
	virtual ~Shape(); //destructor
	virtual void Draw() = 0; //draw function abstraction

	//operator time
	Shape& operator = (const Shape& source); // Assignment operator.
	virtual string ToString() const; //returns cout string description of the point
	int ID() const; //calc dist from current point to origin
};


#endif