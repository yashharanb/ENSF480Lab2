#include <iostream>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle(double x, double y, double sidea, double sideb, const char* name):Shape(x, y, name), Square(x,y,sidea,name){
	side_b = sideb;
}

void Rectangle::display()const{
	cout<< "Rectangle Name: " << getName() << endl;
	cout<< "X-coordinate: " << origin.getx() <<endl;
	cout<< "Y-coordinate: " << origin.gety() <<endl;
	cout<< "Side a: " << side_a << endl;
	cout<< "Side b: " << side_b << endl;
	cout << "Area: " << area() << endl;
	cout << "Perimeter: " << perimeter() <<endl;	
}

double Rectangle::area()const{
	return side_a * side_b;
}

double Rectangle::perimeter()const{
	return (side_a * 2 + side_b * 2);
}	

double Rectangle::getSideB()const{
	return side_b;
}
		
void Rectangle::set_side_b(double side){
	side_b = side;
}
		
