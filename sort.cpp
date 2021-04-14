#include <iostream>

#include "quicksort.hpp"
#include "utils.hpp"
#include "mergesort.hpp"

using namespace std;


int main() {
	int arr[10] = {2,5,1,6,4,8,7,3,10,9};

	mergesort(arr);
//	quicksort(arr, 0, 9);
	print(arr, (int)(sizeof(arr) / sizeof(arr[0])));

	return 0;
}

