#include <iostream>
#include "array_functions.h"

using namespace std;

bool is_equal(const int * const array1, const size_t array1_size, const int * const array2, const size_t array2_size) {
	if (array1_size != array2_size) return false;
	for (size_t i = 0; i < array1_size; i++) {
		if (array1[i] != array2[i]) return false;
	}
	return true;
}

void print_array(const int * const array, const size_t array_size) {
	for (size_t i = 0; i < array_size; i++) {
		cout << array[i] << ' ';
	}
	cout << endl;
}

void fill_array(int * const array, const size_t array_size, const int initial_value) {
	for (size_t i = 0; i < array_size; i++) {
		array[i] = initial_value + i;
	}
}