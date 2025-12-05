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

    // Creating linked list: 10 → 20 → 30 → 40 → 50
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // creating a loop: 50 → 30
    fifth->next = third;

    // STEP 1: Detect Loop
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {     // loop detected
            break;
        }
    }

    // STEP 2: Find starting node of loop
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    // 'slow' is the starting node of loop

    // STEP 3: Find last node of loop and break it
    Node* temp = slow;
    while (temp->next != slow) {
        temp = temp->next;
    }

    temp->next = NULL;   // loop removed

    // FINAL OUTPUT
    cout << "Loop removed successfully.\n";

    return 0;
}
