#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : virtual public Shape{
	
	public:
	
		Circle(double x, double y, double r, const char* name);
		
		double area()const;
		
		double perimeter()const;
		
		double getRadius();
		
		void setRadius(double r);
		
		void display();
		
		
		
	protected:
	
		double radius;
			
};

#endif
