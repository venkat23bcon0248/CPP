#include <iostream>
using namespace std;

class Stack {

private:

    int top;

    int arr[100];

public:

    Stack() {

        top = -1;
    }

    void push(int x) {

        if(top < 90) {

            top++;

            arr[top] = x;
        }

        else {

            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {

        if(top >= 0) {

            top--;
        }

        else {

            cout << "Stack Underflow" << endl;
        }
    }

    int peek() {

        if(top >= 0) {

            return arr[top];
        }

        else {

            cout << "Stack Underflow" << endl;

            return -1;
        }
    }
};

int main() {

    Stack s;

    s.push(10);

    s.push(20);

    s.push(30);

    cout << "Top element is: " << s.peek() << endl;

    s.pop();

    cout << "Top element is: " << s.peek() << endl;

    return 0;
}