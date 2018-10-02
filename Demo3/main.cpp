#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
	LinkedList lst;
	lst.push_back(4);
	lst.push_back(1);
	lst.push_back(5);
	lst.push_back(7);
	lst.push_front(2);
	lst.push_front(8);

	lst.pop_back();
	lst.pop_back();
	lst.pop_back();
	lst.pop_back();
	lst.pop_back();
	lst.pop_back();

	for (size_t i = 0; i < lst.get_size(); i++) {
		cout << lst.at(i) << " ";
	}
	cout << endl;

	return 0;
}