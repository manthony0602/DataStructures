#include<iostream>
using namespace std;
class Node {
public:
    int key; // uniquely identifies a node
    int data; // value stored in the node
    Node* next; // pointer that references to the next node in the list
    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int key1, int data1)
    {
        key = key1;
        data = data1;
    }
};
class CircularLinkedList {
public:
    Node* h; // head node
    CircularLinkedList()
    {
        h = NULL;
    }
    Node* NodeExists(int k) // method to check if the node exists with the particular key value
    {
        Node* tmp = NULL;
        Node* pointer = h;
        if (pointer == NULL)
        {
            return tmp;
        }
        else {
            do
            {
                if (pointer->key == k)
                {
                    tmp = pointer;
                }
                pointer = pointer->next;
            } while (pointer != h);
            return tmp;
        }
    }
    void AppendNode(Node* newnode) // appending node in the list
    {
        if (NodeExists(newnode->key) != NULL)
        {
            cout << "Since node exists with key value : " << newnode->key;
            cout << " so, node can't be appended." << endl;
        }
        else
        {
            if (h == NULL)
            {
                h = newnode;
                newnode->next = h;
                cout << "Node appended at the head." << endl;
            }
            else
            {
                Node* pointer = h;
                while (pointer->next != h)
                {
                    pointer = pointer->next;
                }
                pointer->next = newnode;
                newnode->next = h;
                cout << "Node appended." << endl;
            }
        }
    }
    void PrependNode(Node* newnode) //prepending node in the list
    {
        if (NodeExists(newnode->key) != NULL)
        {
            cout << "Since node exists with key value : " << newnode->key;
            cout << " so, node can't be prepended." << endl;
        }
        else
        {
            if (h == NULL)
            {
                h = newnode;
                newnode->next = h;
                cout << "Node prepended at the head." << endl;
            }
            else
            {
                Node* pointer = h;
                while (pointer->next != h)
                {
                    pointer = pointer->next;
                }
                pointer->next = newnode;
                newnode->next = h;
                h = newnode;
                cout << "Node prepended." << endl;
            }
        }
    }
    void InsertNode(int k, Node* newnode)  //inserting node 
    {
        Node* pointer = NodeExists(k);
        if (pointer == NULL)
        {
            cout << "Node does not exist with key:" << k << endl;
        }
        else
        {
            if (NodeExists(newnode->key) != NULL)
            {
                cout << "Since node exists with key value : " << newnode->key;
                cout << " so, node can't be inserted." << endl;
            }
            else
            {
                if (pointer->next == h)
                {
                    newnode->next = h;
                    pointer->next = newnode;
                    cout << "Node inserted at the end of the list." << endl;
                }
                else
                {
                    newnode->next = pointer->next;
                    pointer->next = newnode;
                    cout << "Node inserted in between the list." << endl;
                }
            }
        }
    }
    void DeleteNode(int k) // deleting node 
    {
        Node* pointer = NodeExists(k);
        if (pointer == NULL)
        {
            cout << "Node does not exist with key: " << k << endl;
        }
        else
        {
            if (pointer == h)
            {
                if (h->next == h)
                {
                    h = NULL;
                    cout << "Head node is deleted and the list is now empty." << endl;
                }
                else
                {
                    Node* pointer1 = h;
                    while (pointer1->next != h)
                    {
                        pointer1 = pointer1->next;
                    }
                    pointer1->next = h->next;
                    h = h->next;
                    cout << "Node deleted with key value : " << k << endl;
                }
            }
            else
            {
                Node* tmp = NULL;
                Node* prevpointer = h;
                Node* currentpointer = h->next;
                while (currentpointer != NULL)
                {
                    if (currentpointer->key == k)
                    {
                        tmp = currentpointer;
                        currentpointer = NULL;
                    }
                    else
                    {
                        prevpointer = prevpointer->next;
                        currentpointer = currentpointer->next;
                    }
                }
                prevpointer->next = tmp->next;
                cout << "Node deleted with key value : " << k << endl;
            }
        }
    }
    void UpdateNode(int k, int newdata)  //updating node
    {
        Node* pointer = NodeExists(k);
        if (pointer != NULL)
        {
            pointer->data = newdata;
            cout << "Node updated." << endl;
        }
        else
        {
            cout << "Node doesn't exist with key: " << k << endl;
        }
    }
    void DisplayList()
    {
        if (h == NULL)
        {
            cout << "Circular Linked List is empty." << endl;
        }
        else
        {
            cout << "Head: [" << h->key << "," << h->data << "," << h->next << "]" << endl;
            cout << "Circular Linked List values are as follows: " << endl;
            Node* tmp = h;
            do
            {
                cout << "[" << tmp->key << "," << tmp->data << "," << tmp->next << "] ----> ";
                tmp = tmp->next;
            } while (tmp != h);
        }
    }
    void CountList()
    {
        int count = 0;
        if (h == NULL)
        {
            cout << "Node Count= " << count << endl;
        }
        else
        {
            Node* tmp = h;
            do
            {
                count++;
                tmp = tmp->next;
            } while (tmp != h);
            cout << "Node Count= " << count << endl;
        }
    }
};
int main() // main function
{
    CircularLinkedList c;
    int op;
    int keyvalue, kvalue, datavalue;
    do
    {
        cout << "\n Select the option to perform on the Circular Linked List." << endl;
        cout << "1. Append " << endl;
        cout << "2. Prepend " << endl;
        cout << "3. Insert " << endl;
        cout << "4. Delete " << endl;
        cout << "5. Update " << endl;
        cout << "6. Display " << endl;
        cout << "7. Node Count " << endl;
        cout << " Enter 0 to exit " << endl;
        cin >> op;
        Node* node1 = new Node();
        switch (op) {
        case 0:
            break;
        case 1:
            cout << "Enter the key value." << endl;
            cin >> keyvalue;
            cout << "Enter the data value." << endl;
            cin >> datavalue;
            node1->key = keyvalue;
            node1->data = datavalue;
            c.AppendNode(node1);
            break;
        case 2:
            cout << "Enter the key value." << endl;
            cin >> keyvalue;
            cout << "Enter the data value." << endl;
            cin >> datavalue;
            node1->key = keyvalue;
            node1->data = datavalue;
            c.PrependNode(node1);
            break;
        case 3:
            cout << "Enter the key value after which the node is to be inserted. " << endl;
            cin >> kvalue;
            cout << "Enter the key value." << endl;
            cin >> keyvalue;
            cout << "Enter the data value." << endl;
            cin >> datavalue;
            node1->key = keyvalue;
            node1->data = datavalue;
            c.InsertNode(kvalue, node1);
            break;
        case 4:
            cout << "Enter the key value of the node which is to be deleted. " << endl;
            cin >> kvalue;
            c.DeleteNode(kvalue);
            break;
        case 5:
            cout << "Enter the key value to be updated." << endl;
            cin >> keyvalue;
            cout << "Enter the data value to be updated." << endl;
            cin >> datavalue;
            c.UpdateNode(keyvalue, datavalue);
            break;
        case 6:
            c.DisplayList();
            break;
        case 7:
            c.CountList();
            break;
        default:
            cout << "Invalid Choice!" << endl;
        }
    } while (op != 0);
    return 0;
}