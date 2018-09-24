#include <stdio.h>
#include <iostream>
using namespace std
#include "shape.h"
#include <string>

Shape::Shape(int x, int y, const char* name)
: origin(x,y), shapeName(name){}

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
	
	if(this == rhs){
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

const Point& Shape::getOrigin()const{
	
	return origin;
}


char* Shape::getName()const{
	
	return shapeName;
}

virtual void Shape::display(){
	
}

virtual double Shape::distance(Shape& other){
	return 0;
}

static double Shape::distance(Shape& the_shape, Shape& other){
	return 0;
}

void Shape::move(double dx, double dy){
	origin.setx(origin.getx()+dx);
	origin.sety(origin.gety()+dy);	
}
