#ifndef MERGESORT_HPP
#define MERGESORT_HPP

#include <iostream>

void merge(int arr[], int left, int mid, int right);
void mergesort(int arr[], int left, int right);

void mergesort(int arr[], int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		mergesort(arr, left, mid);
		mergesort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

void merge(int arr[], int left, int mid, int right) {
	//std::cout << "left: " << left << ", mid: " << mid << ", right: " << right << ", array: ";
	int temp[10];
	int i, j, k;
	k = 0;
	i = left;
	j = mid + 1;

	while (i <= mid && j <= right) {
		if (arr[i] < arr[j]) {
			temp[k] = arr[i];
			k++;
			i++;
		} else {
			temp[k] = arr[j];
			k++;
			j++;
		}
	}

	while (i <= mid) {
		temp[k] = arr[i];
		k++;
		i++;
	}

	while (j <= right) {
		temp[k] = arr[j];
		k++;
		j++;
	}

	//for (int i = 0; i < k; i++) {
	//	std::cout << temp[i] << " ";
	//}
	//std::cout << std::endl;

	for (i = right; i >= left; i--) {
		--k;
		arr[i] = temp[k];
	}
}

#endif
