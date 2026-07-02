#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;

    Node(int data)
    {
        value = data;
        next = NULL;
    }
};


Node* middle(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}


void print(Node* head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";

        temp = temp->next;
    }
}


int main()
{
    Node* head = new Node(10);

    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);


    cout << "Linked List: ";

    print(head);


    Node* answer = middle(head);

    cout << "\nMiddle Element: " << answer->value;

    return 0;
}