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

    // Creating SORTED Linked List: 10 → 20 → 20 → 30 → 30 → 40
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(20);
    Node* fourth = new Node(30);
    Node* fifth = new Node(30);
    Node* sixth = new Node(40);

    // Linking nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    // REMOVE DUPLICATES FROM SORTED LIST
    Node* current = head;

    while (current != NULL && current->next != NULL) {

        if (current->data == current->next->data) {
            Node* duplicate = current->next;
            current->next = duplicate->next;
            delete duplicate;
        } 
        else {
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
