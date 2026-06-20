#include <iostream>
using namespace std;

class Student {
public:
    int rollno;
    string name;

    void show() {
        cout << name << endl;
        cout << rollno;
    }
};

int main() {
    Student s1;

    s1.name = "Vivek";
    s1.rollno = 12;

    s1.show();

    return 0;
}