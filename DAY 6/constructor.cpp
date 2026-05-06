#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollno;

    Student(string n, int r) {
        name = n;
        rollno = r;
    }

    void show() {
        cout << name << endl;
        cout << rollno;
    }
};

int main() {
    Student s1("Vivek", 12);
    s1.show();
}