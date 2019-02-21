#pragma once

int maxof(int value1, int value2) {
	return value1 > value2 ? value1 : value2;
}

double maxof(double value1, double value2) {
	return value1 > value2 ? value1 : value2;
}

template <class T> T maxOf(T value1, T value2) {
	return value1 > value2 ? value1 : value2;
}