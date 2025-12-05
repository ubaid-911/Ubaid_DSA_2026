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

    // Creating Linked List: 10 → 20 → 30 → 40 → 50
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // FINDING MIDDLE USING FAST-SLOW POINTER
    Node* slow = head;
    Node* fast = head;

    
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;         // moves 1 step
        fast = fast->next->next;   // moves 2 steps
    }

    // slow now points to middle

    // FINAL OUTPUT (ONLY THIS PART)
    cout << "Middle element is: " << slow->data;

    return 0;
}
