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

// Function to reverse k nodes
Node* reverseK(Node* head, int k) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    int count = 0;

    // reverse first k nodes
    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Recursion for next part
    if (next != NULL) {
        head->next = reverseK(next, k);
    }

    return prev;  // new head
}

int main() {

    // Creating Linked List: 10 → 20 → 30 → 40 → 50 → 60
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* six = new Node(60);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = six;

    int k = 3;

    // Reverse in K groups
    head = reverseK(head, k);

    // FINAL OUTPUT
    cout << "After reversing in K groups: ";
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
