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

    // NOW INSERTING AT BEGINNING
    // New node with value 5
    Node* newNode = new Node(5);

    // Linking new node to old head
    newNode->next = head;

    // Updating head
    head = newNode;

    // Traversal
    cout << "Linked List after inserting at beginning: ";
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
