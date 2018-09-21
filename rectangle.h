#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle: public Square
{
	public:
		double getArea();
		
		double getPerimeter();
		
		int getSideA();
		
		int setSideA();
		
		int getSideB();
		
		int setSideB();
		
		void display();
		
		
	private:
		int side_a;
		
		int side_b;
	
}


#endif
