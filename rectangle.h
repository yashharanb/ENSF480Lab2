#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "square.h"

class Rectangle: public Square
{
	public:
		double area();
		
		double perimeter();
		
		int getSideA();
		
		int setSideA();
		
		int getSideB();
		
		int setSideB();
		
		void display();
		
		
	private:
		int side_a;
		
		int side_b;
	
};


#endif
