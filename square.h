#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"

class Square: virtual public Shape{
	
	public:
		Square(double x, double y, double side, const char* name);
		
		double area() const;
		
		double perimeter() const;
		
		double getSideA() const;
		
		void set_side_a(double side);
		
		void display() const;
		
		
	protected:
		double side_a;
	
};


#endif
