#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>


void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void print(int *arr, int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

#endif
