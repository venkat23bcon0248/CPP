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
Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* current = head;
    Node* nextNode;
    while(current != NULL) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    return prev;
}
void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    int value;
    cout << "Enter first value: ";
    cin >> value;
    Node* head = new Node(value);
    Node* temp = head;
    for(int i = 1; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        Node* newNode = new Node(value);
        temp->next = newNode;
        temp = newNode;
    }
    cout << "Original Linked List: ";
    print(head);
    head = reverse(head);
    cout << "\nReversed Linked List: ";
    print(head);
    return 0;
}