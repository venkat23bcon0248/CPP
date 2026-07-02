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


int length(Node* head)
{
    int count = 0;

    Node* temp = head;

    while (temp != NULL)
    {
        count++;

        temp = temp->next;
    }

    return count;
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


    cout << "\nLength = " << length(head);

    return 0;
}