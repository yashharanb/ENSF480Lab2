#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "square.h"

class Rectangle: public Square
{
	public:
		double area()const;
		
		double perimeter()const;
		
		double getSideB()const;
		
		void setSideB(double side);
		
		void display()const;
		
		
	private:
		double side_b;
	
};


#endif
