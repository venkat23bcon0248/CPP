#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollno;
    string branch;
    int batch;
    int crtClass;
    long long phone;

    Student() {
        name = "Not Assigned";
        rollno = 0;
        branch = "NA";
        batch = 0;
        crtClass = 0;
        phone = 0;
    }

    Student(string n, int r, string b, int ba, int c, int p) {
        name = n;
        rollno = r;
        branch = b;
        batch = ba;
        crtClass = c;
        phone = p;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Branch: " << branch << endl;
        cout << "Batch: " << batch << endl;
        cout << "CRT Class: " << crtClass << endl;
        cout << "Phone Number: " << phone << endl;
    }
};

int main() {

    Student s1;

    Student s2("Venkat", 12, "CSE", 2024, 5, 9876543210);

    cout << "Default Constructor Data\n";
    s1.display();

    cout << "\nParameterized Constructor Data\n";
    s2.display();

    return 0;
}