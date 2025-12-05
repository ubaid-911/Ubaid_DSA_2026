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

    // INSERTING IN BETWEEN (insert 25 after 20)
    Node* newNode = new Node(25);

    Node* current = head;
    while (current->data != 20) {
        current = current->next;
    }

    newNode->next = current->next;  // new node → 30
    current->next = newNode;        // 20 → new node

    // FINAL OUTPUT
    cout << "After inserting in between: ";
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
