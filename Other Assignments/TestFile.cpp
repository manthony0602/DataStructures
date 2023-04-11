#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <climits>
using namespace std;
// PROGRAMMING I MIDTERM ASSIGNMENT

/*
* Ask the user to enter a series of integers and then enter "-999" when they are done. The program should
* show the sum of the numbers and the largest integer entered, as well as the smallest integer entered. Write
* a complete program that includes comments throughout the code.
*/


// Main function
int main() {
    // Variables that we'll be using
    int userInput, largestNum = 0, smallestNum = INT_MAX, total = 0;
    int i = 2;

    cout << "Now you will enter a series of numbers: ";  // Prompts the user to enter integers
    cin >> userInput;

    // While loop that will continue to take in input from the user, as long as the input isn't -999
    while (userInput != -999) {
        // If the largestNum is less than the user's input, then the user's input is the new largestNum
        if (largestNum < userInput) {
            largestNum = userInput;
        }
        // If the smallestNum is greater than the user's input, then the user's input is the new smallestNum
        if (smallestNum > userInput) {
            smallestNum = userInput;
        }

        // Continues to prompt the user for more numbers 
        cout << "Integer " << i << ": ";
        cin >> userInput;

        total = total + userInput; // Sums up all of the user's integer inputs
        i++;
    }

    cout << "\n";
    cout << "\n";

    // Prints the necessary results from the user's input
    cout << "The maximum number is: " << largestNum << endl;
    cout << "The minimum number is: " << smallestNum << endl;
    cout << "The sum of the integers is: " << total + 999 << endl; // Add 999 to cancel out the -999 input
}
