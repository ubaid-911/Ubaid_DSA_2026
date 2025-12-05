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

    // FIRST SORTED LIST: 1 → 3 → 5
    Node* head1 = new Node(1);
    Node* second1 = new Node(3);
    Node* third1 = new Node(5);

    head1->next = second1;
    second1->next = third1;
    third1->next = NULL;

    // SECOND SORTED LIST: 2 → 4 → 6
    Node* head2 = new Node(2);
    Node* second2 = new Node(4);
    Node* third2 = new Node(6);

    head2->next = second2;
    second2->next = third2;
    third2->next = NULL;

    // MERGING BOTH LISTS
    Node* temp1 = head1;
    Node* temp2 = head2;

    Node* mergedHead = NULL;
    Node* tail = NULL;

    while (temp1 != NULL && temp2 != NULL) {

        Node* pick;

        if (temp1->data < temp2->data) {
            pick = temp1;
            temp1 = temp1->next;
        } 
        else {
            pick = temp2;
            temp2 = temp2->next;
        }

        if (mergedHead == NULL) {
            mergedHead = pick;
            tail = pick;
        }
        else {
            tail->next = pick;
            tail = pick;
        }
    }

    // Remaining nodes
    if (temp1 != NULL) {
        tail->next = temp1;
    }

    if (temp2 != NULL) {
        tail->next = temp2;
    }

    // FINAL OUTPUT
    cout << "Merged Sorted List: ";
    Node* temp = mergedHead;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
