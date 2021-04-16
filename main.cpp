#include <iostream>

#include "quicksort.hpp"
#include "utils.hpp"
#include "mergesort.hpp"
#include "binarysearch.hpp"
#include "heapsort.hpp"
#include "linkedlist.hpp"

using namespace std;


int main() {
	//int arr[10] = {9,5,6,7,8,1,10,2,4,3};

	//heapsort(arr, 10);
	//mergesort(arr, 0, 9);
//	quicksort(arr, 0, 9);
	//binarysearch(arr, 3, 0, 9);
//	print(arr, (int)(sizeof(arr) / sizeof(arr[0])));
	Node a = Node(5);
	Node b = Node(6);
	Node c = Node(1);
	LinkedList linkedlist = LinkedList();
	linkedlist.append(&a);
	linkedlist.append(&b);
	linkedlist.insert(&c);
	cout << linkedlist.head->data << endl;
	cout << linkedlist.head->next->data << endl;
	return 0;
}

