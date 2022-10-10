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

// Array Queue Implementation still needs fixes/work, not done yet


// Constructor for the Array Queue class
arrayQueue::arrayQueue(int sz) {
	front = -1;
	rear = -1;
	count = 0;
	arr = new int[sz];
	capacity = sz;

	// Initializes all array elements to 0
	/* for (int i = 0; i < size; i++) {
		arr[i] = 0;
	} */
}


// Basic Queue Operations for a Queue
bool arrayQueue::isEmpty() {
	if (getSize() == 0) {
		return true;
	}

	else { return false; }
}


bool arrayQueue::isFull() {
	if (getSize() == capacity) {
		return true
	}

	else { return false; }
}


void arrayQueue::enQueue(double val) {
	if (isFull()) {
		cout << "Queue full" << endl;
		return;
	}
	else if (isEmpty()) {
		rear = 0;
		front = 0;
		arr[rear] = val;
		count++;
	}
	else {
		rear++;
		arr[rear] = val;
		count++;
	}
}

int arrayQueue::deQueue() {
	int x = 0;
	if (isEmpty()) {
		cout << "Queue is Empty. Nothing can be dequeued" << endl;
		return;
	}

	else {
		cout << "Front Value: " << front << endl;
		x = arr[front];
		arr[front] = 0;  // Check to see if this makes function return 0, or if it returns the actual front number in the queue
		front++;
		count--;
		return x;
	}
}


void arrayQueue::makeEmpty() {

	// Test option 1
	for (int i = 0; i < rear; i++) {
		delete arr[i];        // In order for delete operator to work, you have to make "arr" a pointer
		arr[i] == NULL;
	}

	// Test option 2
	arr = new int[0];
	cout << "The array is now empty: ";
	for (int i = 0; i < capacity; i++) {
		cout << arr[i];
	}

	// Test option 3
	arr[] new int[0];         // Re-initializes the array to a length of 0 and then...
	arr[] new int[capacity];  // Initialize that same array to the previous capacity with empty elements
	return arr[];
}


void arrayQueue::display() {
	cout << "All values in the Queue are: \n";
	for (int i = 0; i < rear; i++) {
		cout << arr[i] << ", ";
	}
}


int arrayQueue::getSize() {
	return (count + 1);
}