#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#ifndef Sets_H
#define Sets_H
using namespace std;

// Specification file for Sets class
/* Specification file holds the actual class and its contents*/


class SetType {
private:
	int maxItems;
	ItemType* items;

public: 
	SetType();        // Default constructor is an array of size 400
	SetType(int max); // The parameterized constructor
	~SetType();       // Destructor
	SetType(const SetType anotherSet); // Copy constructor

	// Member functions for the Set ADT
	void MakeEmpty();
	void Store(ItemType item);
	void Delete(ItemType item);
	void Print();

	bool IsEmpty();
	bool IsFull();

	int CardinalityIs();

	SetType Union(SetType setB);
	SetType Intersection(SetType setB);
	SetType Difference(SetType setB);
};
#endif