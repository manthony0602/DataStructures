#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#ifndef Array_Queue_H
#define Array_Queue_H
using namespace std;


// Array Queue Implementation still needs fixes/work, not done yet

class arrayQueue {
private:
	int front,
		size,
		rear,
		arr[size];

public:
	arrQueue(int); // Constructor

	// Basic Queue Operations for a Queue
	bool isEmpty();
	bool isFull();
	void enQueue(double);
	void deQueue();
	void makeEmpty();
	void display();
	int listCount();
};
#endif