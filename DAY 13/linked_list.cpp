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

    Node* first = new Node(10);

    Node* second = new Node(20);

    Node* third = new Node(30);

    Node* fourth = new Node(40);

    Node* fifth = new Node(50);

    first->next = second;

    second->next = third;

    third->next = fourth;

    fourth->next = fifth;

    Node* temp = first;

    while(temp != NULL) {

        cout << temp->data << " ";

        temp = temp->next;
    }

    return 0;
}