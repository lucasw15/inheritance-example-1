#include "rectangle.h"
#include "square.h"

#include <sstream>
#include <string>
using std::string;
using std::stringstream;

#include <iostream>
using std::cout;
using std::endl;

Square::Square(size_t side) {
	cout << "Square::Square(" << side << ")" << endl;
}
Square::~Square(){
	cout << "Square::~Square()" << endl;
}
string Square::ToString()const{

}
