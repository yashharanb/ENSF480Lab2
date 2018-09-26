#ifndef CURVECUT_H
#define CURVECUT_H
#include "circle.h"
#include "rectangle.h"

class CurveCut: public Rectangle, public Circle{
	
	public:
		CurveCut(double x, double y, double sideA, double sideB, double r, const char* name);
				 
		double area()const;
		
		double perimeter()const;
		
		void display();
	
};

#endif
