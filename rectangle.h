#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
using std::string;

class Rectangle{
	size_t _width, _height;
public:
	Rectangle(size_t width, size_t height);
	~Rectangle();
	size_t Area()const;
	size_t Perimeter()const;
	string ToString()const;
	void Double();

};


#endif
