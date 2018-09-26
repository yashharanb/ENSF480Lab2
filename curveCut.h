#fndef CIRCLECUT_H
#define CIRCLECUT_H

class CurveCut: public Rectangle, public Circle{
	
	CurveCut(double x, double y, double sideA, double sideB,
			 double r, const char* name);
			 
	double area();
	
	double perimeter();
	
	void display();
	
};

#endif
