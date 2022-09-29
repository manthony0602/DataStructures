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
	void enqueue(int val);
	int dequeue();
	int count();
	void display();
};
#endif