#define _USE_MATH_DEFINES
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"
#include <cmath>
#include <sstream>

namespace PAULLOPEZ {
	namespace CONTAINERS {
		Array::Array() {
			size = 10;
			table = new Point[size];
			//cout << "Default POINT constructor says hello to you." << endl;
		}
		Array::Array(const int n) {
			size = n;
			table = new Point[n];
			//cout << "This is another ARRAY constructor." << endl;
		}
		Array::Array(const Array& arr) {
			size = arr.size;
			table = new Point[size];
			for (int i = 0; i < size; i++) {
				table[i] = arr.table[i];
			}
			//cout << "Copy POINT constructor says Hello to you." << endl;
		}
		Array::~Array() {
			delete[] table;
			//cout << "Bye bye ARRAY..." << endl;
		}

		Array& Array::operator = (const Array& source) { // Assignment operator.

			if (this == &source) {
				return *this;
			}
			size = source.size;
			table = new Point[size];
			for (int i = 0; i < source.size; i++) {
				table = source.table;
			}
			
			return *this;
		}


		Point& Array::operator [] (int index) { // Read and write version
				if (index >= size || index < 0) {
					throw - 1;
				}
				else {
					return table[index];
				}
		}

		const Point& Array::operator [] (int index) const { // Read only version
			if (index >= size || index < 0) {
				throw - 1;
			}
			else {
				return table[index];
			};
		}
		int Array::Size() const {
			return size; //spits out size of array for this array	
		}

		void Array::SetElement(const Point& pt, const int n) {
				if (n >= size || n < 0) {
					throw -1;
				}
				else {
					table[n] = pt;
				}
		}
		const Point& Array::GetElement(const int n) const {
			 
				if (n >= size || n < 0) {
					throw -1; 
					//throw - 1; // return table[0]; //return value in first slot
				}
				else {
					return table[n];
				}
		}

	}
}