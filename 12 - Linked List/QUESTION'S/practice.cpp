#include<iostream>
using namespace std;

class Node{
public:

    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main()
{
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

    int zeroCount = 0 , oneCount = 0 , twoCount = 0;

    Node*temp = head;
 
    while(temp != NULL) {

        if(temp -> data == 0) zeroCount++;
        else if(temp -> data == 1) oneCount++;
        else twoCount++;

        temp = temp->next;

    }
  
    temp = head;

    while(zeroCount--) {
        temp->data = 0;
        temp = temp->next;
    }

    while(oneCount--) {
        temp->data = 1;
        temp = temp->next;
    }

    while(twoCount--) {
        temp->data = 2;
        temp = temp->next;
    }

    cout << "Linked List is : " << endl;

    temp = head;

    while(temp != NULL) {
        cout << temp->data<< " ";
        temp = temp->next;
    }




return 0;
}