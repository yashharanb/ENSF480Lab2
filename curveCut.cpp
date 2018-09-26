#include <iostream>
#include <math.h>

CurveCut::CurveCut(double x, double y, double sideA, double sideB,
					double r, const char* name)
:Rectangle(x, y, sideA, sideB, name), Circle(x, y, r, name), Shape(x, y, name){}


double CurveCut::area(){
	
	double degreeRad = 45*PI/180;
	
	double circArea = 0.5*(pow(radius, 2))*degreeRad;
	
	double rectArea = side_b*side_a;
	
	return rectArea - circArea;
	
}
	
double CurveCut::perimeter(){
	
	double degreeRad = 45*PI/180;
	
	double arclength = radius*degreeRad;
	
	double rectPer = (2*side_b) + (2*side_a) - (2*radius);
	
	return rectPer + arclength;
}
	
void CurveCut::display(){
	
	cout<< "CurveCut Name: " << getName() << endl;
	cout<< "X-coordinate: " << origin.getx() <<endl;
	cout<< "Y-coordinate: " << origin.gety() <<endl;
	cout<< "Width: " << side_a << endl;
	cout<< "Length: " << side_b << endl;
	cout<< "Radius of cut: " << getRadius() << endl;
}
