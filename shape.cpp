#include <stdio.h>
#include <iostream>
using namespace std;
#include "shape.h"
#include <string.h>

Shape::Shape(double x, double y, const char* name): origin(x,y){
	shapeName = new char[strlen(name)+1];
	strcpy(shapeName, name);
}

Shape:: ~Shape(){
	delete [] shapeName;
}

Shape::Shape(const Shape& source)
: origin(source.origin), shapeName(new char[strlen(source.shapeName)+1])
{
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
	}
	
	strcpy(shapeName, source.shapeName);
}

Shape& Shape::operator =(const Shape& rhs){
	
	if(this == &rhs){
		return *this;
	}
	
	delete [] shapeName;
	shapeName = new char[strlen(rhs.shapeName)+1];
	
	if(shapeName == NULL){
		cerr << "Memory not available...";
		exit(1);
	}
	
	strcpy(shapeName, rhs.shapeName);
	origin = rhs.origin;
	return *this;
	
}

Point& Shape::getOrigin(){
	return origin;
}


char* Shape::getName()const{
	return shapeName;
}

void Shape::display()const{
	cout<< "Shape Name: " << shapeName << endl;
	cout<< "X-coordinate: " << origin.getx() <<endl;
	cout<< "Y-coordinate: " << origin.gety() <<endl;
}

double Shape::distance(Shape& other)const{
	return origin.distance(other.origin);
}

double Shape::distance(Shape& the_shape, Shape& other){
	return Point::distance(the_shape.origin, other.origin);
}

void Shape::move(double dx, double dy){
	origin.setx(origin.getx()+dx);
	origin.sety(origin.gety()+dy);	
}
