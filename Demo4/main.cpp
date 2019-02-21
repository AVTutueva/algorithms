#include <iostream>
#include "function.h"
#include "Point.h"

using namespace std;

int main() {
	int int_value1 = 5, int_value2 = 10;
	double double_value1 = 5.1, double_value2 = 10.1;
	cout << "The max value from " << int_value1 << " and " << int_value2 << " is " << maxOf(int_value1, int_value2) << endl;
	cout << "The max value from " << double_value1 << " and " << double_value2 << " is " << maxOf(double_value1, double_value2) << endl;
	cout << "The max value from a and z is " << maxOf('a', 'z') << endl;


	cout << "The max value from (1,1) and (2,2) is " << maxOf(Point(1, 1), Point(2, 2)) << endl;

	return 0;
}