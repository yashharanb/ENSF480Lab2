// point.h
// ENSF 480 - Lab 2
// By: Nicole Caballero and Yashharan Babra

#include <iostream>
#include <cmath>
#include "point.h"
using namespace std;

int Point::idStart = 1001;
int Point::count = 0;

Point::Point(double xval, double yval){
	x = xval;
	y = yval;
	id = idStart + count;
	count++;
}
void Point::display() const{	//displays x and y coordinates
	cout<<"X-coordinate: " << x << endl;
	cout<<"Y-coordinate: " << y <<endl;
}
	
int Point::counter(){		// returns the number of objects of class Point at any time 
	return count;
}
	
double Point::distance(Point& other)const{
	return sqrt((x-other.x)*(x-other.x) +(y-other.y)*(y-other.y));
}

double Point::distance(Point& first, Point& second){
	return sqrt((first.x-second.x)*(first.x-second.x) +(first.y-second.y)*(first.y-second.y));
}

double Point::getx() const{
	return x;
}

double Point::gety() const{
	return y;
}

int Point::getid() const{
	return id;
}

void Point::setx(double val){
	x = val;
}

void Point::sety(double val){
	y = val;
}
