


#ifndef SHAPE_H
#define SHAPE_H

class Shape{
	
	public:
		
		Shape(int x, int y, char* name);
		//constructor
		
		~Shape();
		//destrutor
		
		Shape(const Shape& source);
		//copy constructor
		
		Shape& operator =(const Shape& rhs);
		//assignment operator
		
		Point& getOrigin()const;
		//returns a reference to the point origin
		
		char* getName()const;
		//returns name of the Shape
		
		void display();
		//prints the Shape's information in this format:
		//	Shape name:
		//	X-coordinate:
		//	Y-coordinate:
		
		double distance(Shape& other);
		
		static double dstance(Shape& the_shape, Shape& other);
		
		void move(double dx, double dy);
		
	private:
		Point origin;
		char* shapeName;
};


#endif
