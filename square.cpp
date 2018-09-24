#include <iostream>
#include "square.h"
using namespace std;

Square::Square(int x, int y, int side, const char* name):Shape(x, y, name){
	side_a = side;
}

void Square::display()const{
	cout<< "Square Name: " << getName() << endl;
	cout<< "X-coordinate: " << origin.getx() <<endl;
	cout<< "Y-coordinate: " << origin.gety() <<endl;
	cout<< "Side a: " << side_a << endl;
	cout << "Area: " << area() << endl;
	cout << "Perimeter: " << perimeter() <<endl;
}

double Square::area()const{
	return side_a * side_a;
}

double Square::perimeter()const{
	return side_a *4;	
}	

double Square::getSideA()const{
	return side_a;
}
		
void Square::setSideA(double side){
	side_a = side;
}
		
