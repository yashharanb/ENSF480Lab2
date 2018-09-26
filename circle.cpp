#inlcude <iostream>
#include <math.h>


double Circle::area(){
	
	return PI*(pow(radius,2));
}

double Circle::perimeter(){
	
	return 2*PI*radius;
}	

double Circle::getRadius(){
	
	return radius;
}
		
void Circle::setRadius(double r){
	
	radius = r;
}
		
void Circle::display(){
	
	cout<< "Circle Name: " << getName() << endl;
	cout<< "Radius: " << getRadius() <<endl;
	cout<< "Area: " << area() << endl;
	cout<< "Perimeter: " << perimeter() <<endl;
}
		

