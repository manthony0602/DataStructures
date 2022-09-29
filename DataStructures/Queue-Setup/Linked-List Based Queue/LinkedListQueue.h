#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#ifndef LinkedList_Queue_H
#define LinkedList_Queue_H
using namespace std;

// Specification file for Linked-List Queue class
/* Specification file holds the actual class */

class listQueue {
private:
	struct Node {
		int data;    // The value in the node
		Node* next;  // To point to the next node
	};

	Node* current;	 // Pointer to the current node
	Node* front;     // Pointer to the front of the list/queue
	Node* rear;      // Pointer to the rear of the list/queue

	int size;

public:
	// Constructor
	listQueue(int);

	// Linked-List based Queue operations
	bool isEmpty();
	bool isFull();
	void enQueue(double);
	void deQueue();
	void display();

};
#endif