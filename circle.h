#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape{
	
	public:
		
		double area();
		
		double perimeter();
		
		double getRadius();
		
		void setRadius();
		
		void display();
		
		
		
	private:
	
		double radius;
			
};

#endif
