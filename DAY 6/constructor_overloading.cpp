#include <iostream>
using namespace std;

class Student {
public:
    int rollno;
    string name;

    Student() {
        name = "Unknown";
        rollno = 0;
    }

    Student(string n, int r) {
        name = n;
        rollno = r;
    }

    void show() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

int main() {
    Student s1;
    Student s2("Vivek", 12);

    s1.show();
    cout << endl;
    s2.show();

    return 0;
}