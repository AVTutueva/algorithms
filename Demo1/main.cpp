#include "array_functions.h"

int main() {
	int array_size = 6;
	int initial_value = 5;
	int * array = new int[array_size];
	fill_array(array, array_size, initial_value);
	print_array(array, array_size);

	delete[] array;

	return 0;
}