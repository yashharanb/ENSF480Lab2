#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include "curveCut.h"

using namespace std;

CurveCut::CurveCut(double x, double y, double sideA, double sideB, double r, const char* name)
:Shape(x, y, name), Rectangle(x, y, sideA, sideB, name), Circle(x, y, r, name){}


double CurveCut::area()const{
	
	double circArea = M_PI*pow(radius,2)*0.25;
	
	double rectArea = side_b*side_a;
	
	return rectArea - circArea;
	
}
	
double CurveCut::perimeter()const{
	
	double arclength = radius*M_PI*0.5;
	
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
