#ifndef BINARYSEARCH_HPP
#define BINARYSEARCH_HPP

#include <iostream>

int binarysearch(int arr[], int target, int low, int high) {
	int mid_idx;
	int max_idx = high;
	int min_idx = low;

	if (arr[high] < target) {
		std::cout << "not found" << std::endl;
		return 1;
	} else if (arr[low] > target) {
		std::cout << "not found" << std::endl;
		return 1;
	}

	while (low < high) {
		mid_idx = (min_idx + max_idx) / 2;

		if (arr[mid_idx] == target) {
			std::cout << "found" << std::endl;
			return 1;
		} else if (arr[mid_idx] < target) {
			min_idx = mid_idx + 1;
		} else if (arr[mid_idx] > target) {
			max_idx = mid_idx - 1;
		}
	}

	std::cout << "not found" << std::endl;
	return 1;
}

#endif
