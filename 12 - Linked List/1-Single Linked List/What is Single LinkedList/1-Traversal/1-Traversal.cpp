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

    // Creating nodes (same as malloc in C but using constructor in C++)
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    // Linking nodes (same as C video: node->next = next_node)
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;   // last node

    // Traversal (same logic as C: temp = head; while(temp != NULL))
    cout << "Linked List: ";
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;   // move to next node
    }

    return 0;
}
