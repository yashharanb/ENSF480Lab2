#fndef CIRCLECUT_H
#define CIRCLECUT_H

class CurveCut: public Rectangle, public Circle{
	
	CurveCut(double x, double y, double r,
			 double sideA, double sideB, const char* name);
			 
	double area();
	
	double perimeter();
	
	void display();
	
};

#endif
