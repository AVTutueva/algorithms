#pragma once

class Point
{
public:
	Point(double x = 0, double y = 0) : x(x), y(y) 
	{}

	~Point()
	{}

	double x;
	double y;

};

struct Segment
{
	Point p1;
	Point p2;
	double length();
};