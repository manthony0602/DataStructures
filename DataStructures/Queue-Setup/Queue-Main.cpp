// Queue-Setup.cpp : This file contains the 'main' function. Program execution
// begins and ends there.
#include "LinkedListQueue.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* This main function only uses the Linked-List version of a Queue. 
But thesame can be done with an Array version of a Queue. */

int main() {

    listQueue q1;
    int option;
    double value;

    do {
        cout << "-------------------------------------------------------------\n";
        cout << "\n";
        cout << "What operation do you want to perform? Select Option number.\n";
        cout << "\n";

        cout << "0. Exit Program" << endl;
        cout << "1. Enqueue()" << endl;
        cout << "2. Dequeue()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;     // isFull() doesnt work correctly yet
        cout << "5. listCount()" << endl;
        cout << "6. display()" << endl;
        cout << "7. makeEmpty()" << endl;  // makeEmpty() doesnt work correctly yet

        cout << "\n";
        cout << "Option: ";
        cin >> option;
        cout << "\n";

        switch (option) {
        case 0:
            break;

        case 1:
            cout << "Enqueue Operation \n";
            cout << "Enter an item to Enqueue in the Queue: ";
            cin >> value;
            q1.enQueue(value);
            cout << "*enqueued*\n";
            break;

        case 2:
            cout << "Dequeue Operation \n";
            cout << "Dequeued Value: ";
            q1.deQueue();
            cout << "\n";
            break;

        case 3:
            if (q1.isEmpty())
                cout << "Queue is Empty" << endl;
            else
                cout << "Queue is not Empty" << endl;
            break;

        case 4:
            if (q1.isFull() == true) {
                cout << "Queue is Full" << endl;
            }
            else {
                cout << "Queue is not Full" << endl;
            }
            break;

        case 5:
            cout << "Count Operation\n";
            cout << "Count of items in Queue : " << q1.listCount() << endl;
            break;

        case 6:
            cout << "Display Function Called: " << endl;
            q1.display();
            break;

        case 7:
            q1.makeEmpty();
            cout << "*Queue is now empty*\n";
            break;

        default:
            cout << "Enter Proper Option number " << endl;
        }

    } while (option != 0);

    return 0;
}