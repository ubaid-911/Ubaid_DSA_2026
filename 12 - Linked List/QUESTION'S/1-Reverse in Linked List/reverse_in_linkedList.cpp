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

    // Creating Linked List: 10 → 20 → 30 → 40
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    head->next = second;
    second->next = third;
    third->next = fourth;

    // REVERSING THE LINKED LIST
    Node* prev = NULL;
    Node* curr = head;
    Node* nextPtr = NULL;

    while (curr != NULL) {
        nextPtr = curr->next;   
        curr->next = prev;     
        prev = curr;           
        curr = nextPtr;        
    }

    head = prev; // new head after reversing

    // FINAL OUTPUT (ONLY THIS PART)
    cout << "After reversing: ";
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
