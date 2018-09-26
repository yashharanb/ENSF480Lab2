#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape{
	
	public:
	
		Circle(double x, double y, double r, const char* name);
		
		double area();
		
		double perimeter();
		
		double getRadius();
		
		void setRadius();
		
		void display();
		
		
		
	private:
	
		double radius;
			
};

#endif
