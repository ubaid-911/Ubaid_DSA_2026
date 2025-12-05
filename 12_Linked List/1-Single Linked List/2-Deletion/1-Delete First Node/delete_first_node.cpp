#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {

    // Creating nodes
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    // Linking nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    // NOW DELETING FIRST NODE
    if (head != NULL) {
        Node* temp = head;     // store the old head
        head = head->next;     // move head to 2nd node
        delete temp;           // delete old head
    }

    // Traversal
    cout << "Linked List after deleting first node: ";
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
