#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

#include <iostream>

#include "utils.hpp"

int partition(int arr[], int start, int end) {
	int *pivot = &arr[start];

	int leftidx = start + 1;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] < *pivot) {
			swap(&arr[i], &arr[leftidx]);
			leftidx++;
		}
	}
	
	swap(pivot, &arr[leftidx - 1]);
	return leftidx - 1;
}


void quicksort(int arr[], int start, int end) {
	int pivotidx;
	if (start < end) {
		pivotidx = partition(arr, start, end);
		quicksort(arr, start, pivotidx - 1);
		quicksort(arr, pivotidx + 1, end);
	}
}

#endif
