#ifndef SQUARE_H
#include SQUARE_H

class Square: public Shape
{
	public:
		double getArea();
		
		double getPerimeter();
		
		int getSideA();
		
		int setSideA();
		
		void display();
		
		
	private:
		int side_a;
	
}


#endif
