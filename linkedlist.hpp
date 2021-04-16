#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <iostream>

class Node {
	public:
		int data;
		Node *next;

	Node() {
		data = 0;
		next = NULL;
	}

	Node(int value) {
		data = value;
		next = NULL;
	}
};

class LinkedList {
	public:
		Node *head;

	int append(Node *node); // add a node at the end of linked list
	int insert(Node *node); // add a node at the start of linked list
	int isEmpty();
	Node* seach(int k);

	LinkedList() {
		head = NULL;
	}
};

int LinkedList::append(Node *node) {
	if (head == NULL ) {
		head = node;
		head->next = NULL;
	} else {
		Node* ptr = head;
		while (ptr->next != NULL) {
			ptr = ptr->next;
		}
		ptr->next = node;
	}
	return 1;
}

int LinkedList::insert(Node *node) {
	node->next = head;	
	head = node;
	return 1;
}


#endif
