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

// Function to detect cycle
bool isCyclic(Node* head) {

    if (head == NULL) return false;

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;           // moves 1 step
        fast = fast->next->next;     // moves 2 steps

        if (slow == fast) {          // cycle detected
            return true;
        }
    }

    return false;   // no cycle
}

int main() {

    // Create normal linked list
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;    // NO cycle

    // Uncomment to make it cyclic:
    // fourth->next = second;

    if (isCyclic(head))
        cout << "Linked List is Cyclic";
    else
        cout << "Linked List is NOT Cyclic";

    return 0;
}
