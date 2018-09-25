#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"
class Square: public Shape{
	public:
		Square(int x, int y, int side, const char* name);
		
		double area() const;
		
		double perimeter() const;
		
		double getSideA() const;
		
		void setSideA(double side);
		
		void display() const;
		
		
	protected:
		double side_a;
	
};


#endif
