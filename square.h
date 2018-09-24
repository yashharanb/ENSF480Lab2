#ifndef SQUARE_H
#include SQUARE_H

class Square: public Shape
{
	public
		Square(int x, int y, int side, char* name);
		
		double area() const;
		
		double perimeter() const;
		
		int getSideA() const;
		
		int setSideA();
		
		void display() const;
		
		
	private:
		int side_a;
	
};


#endif
