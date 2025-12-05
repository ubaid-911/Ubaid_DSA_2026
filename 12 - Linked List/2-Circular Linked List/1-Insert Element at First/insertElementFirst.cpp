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

    // Creating circular linked list: 10 → 20 → 30 → back to 10
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head->next = second;
    second->next = third;
    third->next = head;   // circular link

    // INSERTING AT BEGINNING (value = 5)
    Node* newNode = new Node(5);

    // Find last node
    Node* last = head;
    while (last->next != head) {
        last = last->next;
    }

    // Insert at beginning
    newNode->next = head;  
    last->next = newNode;  
    head = newNode;

    // FINAL OUTPUT (ONLY THIS PART)
    cout << "After inserting at beginning: ";
    Node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    return 0;
}
