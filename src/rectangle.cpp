#include "../header/rectangle.hpp"

Rectangle::Rectangle() {
	this->set_width(0);
	this->set_height(0);
}

Rectangle::Rectangle(int w, int h) {
	this->set_width(w);
	this->set_height(h);
}

void Rectangle::set_width(int w) {
	this->width = w;
}

void Rectangle::set_height(int h) {
	this->height = h;
}

int Rectangle::area() {
	return this->width * this->height;
}

int Rectangle::perimeter() {
	return (2 * this->width) + (2 * this->height);
}
