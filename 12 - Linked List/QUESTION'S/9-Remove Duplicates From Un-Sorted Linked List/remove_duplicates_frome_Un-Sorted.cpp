#include <iostream>
#include <unordered_set>
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

    // Creating UNSORTED linked list: 10 → 20 → 10 → 30 → 20 → 40
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(10);
    Node* fourth = new Node(30);
    Node* fifth = new Node(20);
    Node* sixth = new Node(40);

    // Linking nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    // REMOVE DUPLICATES (UNSORTED LIST)
    unordered_set<int> seen;

    Node* current = head;
    Node* prev = NULL;

    while (current != NULL) {

        if (seen.find(current->data) != seen.end()) {
            // Duplicate found → remove node
            prev->next = current->next;
            delete current;
            current = prev->next;
        } 
        else {
            // Not seen → add to set
            seen.insert(current->data);
            prev = current;
            current = current->next;
        }
    }

    // FINAL OUTPUT
    cout << "After removing duplicates: ";
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
