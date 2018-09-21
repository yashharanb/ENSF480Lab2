#include <stdio.h>
#include "shape.h"

Shape::Shape(Point o, char* name)
: origin(o), shapeName(name){}

Shape:: ~Shape(){
	delete [] shapeName;
}

Shape::Shape(const Shape& source)
: origin(source.origin), shapeName(new char[srtlen(source.shapeName)+1])
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
	
	strcpy(shapeNAme, rhs.shapeName);
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
	
}

static double Shape::distance(Shape& the_shape, Shape& other){
	
}

void Shape::move(double dx, double dy){
	
	origin.setx(dx);
	origin.sety(dy);
	
}
