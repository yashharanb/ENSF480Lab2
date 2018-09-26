#ifndef SHAPE_H
#define SHAPE_H
#include "point.h"

class Shape{
	
	public:
		
		Shape(double x, double y, const char* name);
		//constructor
		
		~Shape();
		//destrutor
		
		Shape(const Shape& source);
		//copy constructor
		
		Shape& operator =(const Shape& rhs);
		//assignment operator
		
		Point& getOrigin();
		//returns a reference to the point origin
		
		char* getName()const;
		//returns name of the Shape
		
		void display()const;
		//prints the Shape's information in this format:
		//	Shape name:
		//	X-coordinate:
		//	Y-coordinate:
		
		double distance(Shape& other)const;
		
		static double distance(Shape& the_shape, Shape& other);
		
		void move(double dx, double dy);
		//changes the position of the shape, the current x and y coordinates, to x+dx, and y+dx
		
	protected:
		Point origin;
		char* shapeName;
};


#endif
