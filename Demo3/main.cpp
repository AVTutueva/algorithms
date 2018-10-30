#include <iostream>
#include "LinkedList.h"
#include "Iterator.h"

using namespace std;

int main() {
	LinkedList lst;
	lst.push_back(4);
	lst.push_back(1);
	lst.push_back(5);
	lst.push_back(7);
	lst.push_front(2);
	lst.push_front(8);

	Iterator * lst_iterator = lst.create_iterator();
	while (lst_iterator->has_next()) {
		cout << lst_iterator->next() << ' ';
	}


	cout << endl;

	return 0;
}