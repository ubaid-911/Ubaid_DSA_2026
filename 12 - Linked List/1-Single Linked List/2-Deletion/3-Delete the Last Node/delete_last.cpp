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

    // DELETE LAST NODE (simple version)
    Node* temp = head;

    // Move to second-last node
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    Node* lastNode = temp->next;  // last node
    temp->next = NULL;            // remove link
    delete lastNode;              // delete last node

    // Print list
    cout << "Linked list after deleting last node: " << endl;

    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
