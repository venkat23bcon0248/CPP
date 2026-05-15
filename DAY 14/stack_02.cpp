#include <iostream>
using namespace std;

class Stack {

    int arr[5];

    int top;

public:

    Stack() {

        top = -1;
    }

    bool isEmpty() {

        return top == -1;
    }

    bool isFull() {

        return top == 4;
    }

    int peek() {

        if(isEmpty()) {

            cout << "Stack is Empty" << endl;

            return -1;
        }

        return arr[top];
    }
};

int main() {

    Stack s;

    if(s.isEmpty()) {

        cout << "Stack is Empty" << endl;
    }

    if(s.isFull()) {

        cout << "Stack is Full" << endl;
    }

    else {

        cout << "Stack is Not Full" << endl;
    }

    return 0;
}