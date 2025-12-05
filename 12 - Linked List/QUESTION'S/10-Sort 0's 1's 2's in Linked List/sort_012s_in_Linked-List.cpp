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

    // Creating linked list: 1 → 0 → 2 → 1 → 0
    Node* head = new Node(1);
    Node* second = new Node(0);
    Node* third = new Node(2);
    Node* fourth = new Node(1);
    Node* fifth = new Node(0);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;


    // STEP 1: Count number of 0s, 1s, 2s
    int zeroCount = 0, oneCount = 0, twoCount = 0;

    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == 0) zeroCount++;
        else if (temp->data == 1) oneCount++;
        else twoCount++;

        temp = temp->next;
    }


    // STEP 2: Rewrite the linked list in sorted order
    temp = head;

    while (zeroCount--) {
        temp->data = 0;
        temp = temp->next;
    }

    while (oneCount--) {
        temp->data = 1;
        temp = temp->next;
    }

    while (twoCount--) {
        temp->data = 2;
        temp = temp->next;
    }


    // FINAL OUTPUT
    cout << "Sorted Linked List: ";
    temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
