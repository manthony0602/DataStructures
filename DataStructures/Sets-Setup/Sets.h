#include "Map.h"
// File Map.h must include a definition of ItemType and a function named
// "map" that maps an item of ItemType into an index between 0 and max-1
// if the parameterized constructor is used and between 0 and 399 if the 
// default constructor is used

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