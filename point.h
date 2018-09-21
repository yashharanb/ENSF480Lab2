// point.h
// ENSF 480 - Lab 2
// By: Nicole Caballero and Yashharan Babra

#ifndef POINT_H
#define POINT_H

class Point {
 public:
	Point(int xval, int yval);
	void display() const;	//displays x and y coordinates
	int counter();		// returns the number of objects of class Point at any time 
	double distance(Point& other);
	static double distance(Point& first, Point& second);
	double getx() const;
	double gety() const;
	void setx(double val);
	void sety(double val);
	
 private:
	double x;
	double y;
	int id;
	static int idStart = 1001;
	static int count = 0;		//keeps track of how many Point objects exist
};
#endif











