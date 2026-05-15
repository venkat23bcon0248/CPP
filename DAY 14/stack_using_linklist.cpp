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

class Stack {

    Node* top;

public:

    Stack() {

        top = NULL;
    }

    void push(int value) {

        Node* newNode = new Node(value);

        newNode->next = top;

        top = newNode;
    }

    void pop() {

        if(top == NULL) {

            cout << "Stack Underflow" << endl;

            return;
        }

        top = top->next;
    }

    int peek() {

        if(top == NULL) {

            cout << "Stack is Empty" << endl;

            return -1;
        }

        return top->data;
    }

    bool isEmpty() {

        return top == NULL;
    }
};

int main() {

    Stack s;

    s.push(10);

    s.push(20);

    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();

    cout << "Top element after pop: " << s.peek() << endl;

    if(s.isEmpty()) {

        cout << "Stack is Empty" << endl;
    }

    else {

        cout << "Stack is Not Empty" << endl;
    }

    return 0;
}

    