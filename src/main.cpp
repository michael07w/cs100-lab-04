#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

int main() {
	Rectangle rect;
	rect.set_width(3);
	rect.set_height(4);
	cout << "Rectangle area: " << rect.area() << endl;
	cout << "Rectangle perimeter: " << rect.perimeter() << endl;
	return 0;
}
