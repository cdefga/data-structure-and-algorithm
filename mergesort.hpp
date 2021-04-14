#ifndef MERGESORT_H
#define MERGESORT_H

#include <iostream>

void mergesort(int arr[], int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		mergesort(arr, left, mid);
		mergesort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

#endif
