#pragma once
#include <iostream>

using namespace std;

class Point
{
public:
	Point(int x, int y);
	friend ostream& operator<<(ostream& output_stream, Point point1);
	friend bool operator>(Point point1, Point point2);

private:
	int x;
	int y;
};




