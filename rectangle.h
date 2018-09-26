#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "square.h"

class Rectangle: public Square
{
	public:
		Rectangle(double x, double y, double sidea, double sideb, const char* name);
	
		double area()const;
		
		double perimeter()const;
		
		double getSideB()const;
		
		void set_side_b(double side);
		
		void display()const;
		
		
	private:
		double side_b;
	
};


#endif
