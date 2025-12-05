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

    // Linking nodes (Circular)
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;   // last node points back to head

    // TRAVERSAL OF CIRCULAR LINKED LIST
    cout << "Circular Linked List Traversal: ";

    Node* temp = head;

    // Use do-while because we must print head also
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    return 0;
}
