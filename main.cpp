#include "rectangle.h"
#include "square.h"

#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char* argv[]){
	Rectangle r(2, 3);
	cout << r.ToString() << endl;
	cout << r.Perimeter() << endl;
	cout << r.Area() << endl;

	return 0;
}
