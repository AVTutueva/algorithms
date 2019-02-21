#include <math.h>
#include "Point.h"


Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

ostream & operator<<(ostream & output_stream, Point point1)
{
	cout << "(" << point1.x << "," << point1.y << ")";
	return output_stream;
}

bool operator>(Point point1, Point point2)
{
	return sqrt(pow(point1.x, 2) + pow(point1.y, 2)) >
		sqrt(pow(point2.x, 2) + pow(point2.y, 2));
}
