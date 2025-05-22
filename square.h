#ifndef SQUARE_H
#define SQUARE_H

#include "point.h"
#include "rectangle.h"

#include <string>
using std::string;

class Square : public Rectangle{

public:
	Square(const Point& upperLeft, size_t side);
	~Square();
	string ToString()const;
};
// 1. What happened when you removed the Rectangle in the ToString()?
// the square's ToString() no longer included the rectangle’s properties.
// because Square inherits from Rectangle, and the base class's ToString() output is not included.


// 2. Could you print the _width only in the square? Why?
// Yes, I could access and print _width only if it was declared as protected since derived classes cannot access private from the original.



// 3. What happened when you removed the Rectangle constructor call? Why?
// the compiler gives an error or default-initialized class.
// Rectangle doesn’t have a default constructor, so we must explicitly call the constructor in the Square list.


#endif
