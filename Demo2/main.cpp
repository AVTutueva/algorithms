#include <iostream>
#include "geometry.h"

using namespace std;

int main() {

	Point p1;
	Point p2(3, 4);
	Point p3(2);
	Segment s = { p1, p2 };
	cout << s.length();

	return 0;
}