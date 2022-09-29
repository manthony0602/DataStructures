#include "LinkedListQueue.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// Implementation file for Linked-List based Queue
/* Implementation file holds the member function definitions that are in the class */

listQueue::listQueue(int x) {
	front = -1;
	rear = -1;
	size = x;
};


bool listQueue::isEmpty() {
	if (front == -1 && rear == -1) {
		return true;
	}
	else { return false }
};


bool listQueue::isFull() {
	if (rear == size - 1) {
		return true;
	}

	else {return false }
};


void listQueue::enQueue(double item) {
	Node* newNode;
	newNode = new Node;
	newNode->data = item;
	newNode->next = NULL;
}


void listQueue::deQueue() {
	Node* temp;
	if (front == NULL) {
		cout << "Queue is Empty";
	}
	else {
		temp = front;
		front = front->next;
		delete temp;
	}
}


void listQueue::display() {
	Node* temp;
	temp = front;
	while (temp != NULL) {
		cout << temp->data << ", ";
		temp = temp->next;
	}
	cout << "\n";
}