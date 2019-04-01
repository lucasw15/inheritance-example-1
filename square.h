#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

#include <string>
using std::string;

class Square : public Rectangle{

public:
	Square(size_t side);
	~Square();
	string ToString()const;
};


#endif
