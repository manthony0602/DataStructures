#include "ArrayQueue.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// Implementation file for Array-based Queue
/* Implementation file holds the member function definitions that are in the class */


// Constructor for the Array Queue class
arrayQueue::arrQueue(int x) {
	front = -1;
	rear = -1;
	size = x;

	// Initializes all array-based elements to 0
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
}

// Basic Queue Operations for a Queue
bool arrayQueue::isEmpty() {
	if (front == -1 && rear == -1) {
		return true;
	}

	else { return false }
}

bool arrayQueue::isFull() {
	if (rear == size - 1) {
		return true
	}

	else { return false };
}

void arrayQueue::enqueue(int val) {
	if (isFull()) {
		cout << "Queue full" << endl;
		return;
	}
	else if (isEmpty()) {
		rear = 0;
		front = 0;
		arr[rear] = val;
	}
	else {
		rear++;
		arr[rear] = val;
	}
}

int arrayQueue::dequeue() {
	int x = 0;
	if (isEmpty()) {
		cout << "Queue is Empty" << endl;
		return x;
	}
	else if (rear == front) {
		x = arr[rear];
		rear = -1;
		front = -1;
		return x;
	}
	else {
		cout << "Front Value: " << front << endl;
		x = arr[front];
		arr[front] = 0;
		front++;
		return x;
	}
}

int arrayQueue::count() {
	return (rear - front + 1);
}

void arrayQueue::display() {
	cout << "All values in the Queue are: \n";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ", ";
	}
}