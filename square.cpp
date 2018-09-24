#include <iostream>

Square::Square(int x, int y, int side, char* name):Shape(x, y, name){
	side_a = side;
}

void Square::display()const{
	cout<< "Square Name: " << shapeName << endl;
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
	
	
}	

int Square::getSideA()const{
	
}
		
int Square::setSideA(){
	
}
		
void Square::display()const{
	
}
		
