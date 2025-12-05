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

// Function to check circular list
bool isCircular(Node* head) {
    if (head == NULL) 
        return true;  // empty list is considered circular

    Node* temp = head->next;

    while (temp != NULL && temp != head) {
     temp = temp->next;
    }

    // If temp == head → circular
    return (temp == head);
}

int main() {

    // NORMAL LINKED LIST (Not circular)
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    head->next = second;
    second->next = third;
    third->next = NULL;   // not circular

    if (isCircular(head))
        cout << "Linked List is Circular";
    else
        cout << "Linked List is Not Circular";

    return 0;
}
