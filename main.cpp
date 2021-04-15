#include <iostream>

#include "quicksort.hpp"
#include "utils.hpp"
#include "mergesort.hpp"
#include "binarysearch.hpp"

using namespace std;


int main() {
	int arr[10] = {9,5,6,7,8,1,10,2,4,3};

	mergesort(arr, 0, 9);
//	quicksort(arr, 0, 9);
	binarysearch(arr, 3, 0, 9);
	print(arr, (int)(sizeof(arr) / sizeof(arr[0])));

	return 0;
}

