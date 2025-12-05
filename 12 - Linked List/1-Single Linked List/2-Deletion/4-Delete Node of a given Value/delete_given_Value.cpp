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

    // Creating nodes
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    // Linking nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    // DELETE NODE OF GIVEN VALUE
    int value = 30;

    // If value is at head
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else {
        Node* temp = head;

        // Move till previous node of node to delete
        while (temp->next->data != value) {
            temp = temp->next;
        }

        // Delete the node
        Node* deleteNode = temp->next;
        temp->next = deleteNode->next;
        delete deleteNode;
    }

    // Print the list
    cout << "Linked List after deleting value " << value << ": ";
    Node* t = head;

    while (t != NULL) {
        cout << t->data << " ";
        t = t->next;
    }

    return 0;
}
