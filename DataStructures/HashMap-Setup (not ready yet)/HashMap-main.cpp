// HashMap-Setup.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "HashMap.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
using namespace std;


// This main is based off of the maps class in the .cpp and .h files


// This main function only works because of the "#include" header file, it's not based off of maps class
int main() {

	map<int, string, int> Players; // Initializes a HashMap named "Players", which is holding an integer and string

	Players.insert(pair<int, string>(2, "Lin Dan"));
	Players.insert(pair<int, string>(1, "Chen Long"));

	cout << "Number of Players " << Players.size() << endl;
	for (map<int, string>::iterator it = Players.begin(); it != Players.end(); ++it) {
		cout << (*it).first << ": " << (*it).second << endl;
	}
	return 0;
}