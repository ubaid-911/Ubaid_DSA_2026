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

// Step 1: Detect cycle (meeting point)
Node* detectCycle(Node* head) {

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return slow;   // meeting point
        }
    }

    return NULL; // no cycle
}

// Step 2: Find starting node of loop
Node* findStart(Node* head) {

    Node* intersection = detectCycle(head);

    if (intersection == NULL)
        return NULL; // no loop

    Node* slow = head;    // pointer1
    Node* fast = intersection; // pointer2 (renamed)

    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;  // starting node of loop
}

int main() {

    // Creating linked list: 10 → 20 → 30 → 40 → back to 20
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    head->next = second;
    second->next = third;
    third->next = fourth;

    // Making a loop
    fourth->next = second;  // Loop starts at node 20

    Node* start = findStart(head);

    if (start != NULL)
        cout << "Loop starts at node with value: " << start->data;
    else
        cout << "No loop found";

    return 0;
}
