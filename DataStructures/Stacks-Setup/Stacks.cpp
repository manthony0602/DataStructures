#include "Stacks.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// Implementation file for Stacks
/* Implementation file hols the member function definitions that are in the class */

void Stack::push(int x) {
	if (isFull()) {
		cout << "This is Stack Overflow\n";
	}
	else {
		top++;
		num[top] = x;
	}
}

int Stack::isEmpty() {
	if (top == -1) {
		return 1;  // Returning true
	}
	else {
		return 0;  // Returning false
	}
}

void Stack::pop() {
	int temp;
	if (isEmpty()) {
		cout << "The stack is empty. Unable to pop value.\n";
	}
	temp = num[top];
	top--;
	cout << temp;
}

int Stack::isFull() {
	if (top == (size - 1)) {
		return 1;   // Returning true
	}
	else {
		return 0;   // Returning false
	}
}

void Stack::showStack() {
	if (top >= 0) {
		for (int i = top; i >= 0; i--) {
			cout << num[i] << endl;
		}
	}
	else {
		cout << "Stack is empty.\n";
	}
}