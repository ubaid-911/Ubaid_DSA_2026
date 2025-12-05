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
    Node* fifth = new Node(50);

    // Linking nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    // DELETE NODE IN BETWEEN
    // Example: delete node at position 3 (value 30)

    int position = 3;

    // If deleting at head
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
    } 
    else {
        Node* temp = head;
        int count = 1;

        // Reach (position - 1)th node
        while (count < position - 1) {
            temp = temp->next;
            count++;
        }

        Node* deleteNode = temp->next;          // node to delete
        temp->next = temp->next->next;          // bypass the node
        delete deleteNode;                      // delete the node
    }

    // Traversal
    cout << "Linked List after deleting in between: ";
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
 