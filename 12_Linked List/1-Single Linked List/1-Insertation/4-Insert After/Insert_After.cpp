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

    // Creating linked list
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    head->next = second;
    second->next = third;
    third->next = fourth;

    // INSERT AFTER
    // Suppose we are given pointer to 'second'
    Node* current = second;   // already given
    Node* newNode = new Node(25);

    // Insert after 'current'
    newNode->next = current->next;
    current->next = newNode;

    // PRINT
    cout << "After inserting after the given node: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
