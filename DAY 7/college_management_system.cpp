#include <iostream>
using namespace std;

class College {
public:
    string collegeName;
    string address;

    void setCollege(string n, string a) {
        collegeName = n;
        address = a;
    }

    virtual void show() = 0;
};

class Student : public College {
public:
    int rollno;
    long long mobile;
    string course;
    int year;
    string subject;
    string batch;
    string email;

    Student(int r, long long m, string c, int y, string s, string b, string e) {
        rollno = r;
        mobile = m;
        course = c;
        year = y;
        subject = s;
        batch = b;
        email = e;
    }

    void show() override {
        cout << "----- Student Details -----" << endl;
        cout << "College Name: " << collegeName << endl;
        cout << "Address: " << address << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Mobile: " << mobile << endl;
        cout << "Course: " << course << endl;
        cout << "Year: " << year << endl;
        cout << "Subject: " << subject << endl;
        cout << "Batch: " << batch << endl;
        cout << "Email: " << email << endl;
    }
};

class Teacher : public College {
public:
    string name;
    int age;
    string department;
    string subject;
    double salary;
    string post;

    Teacher(string n, int a, string d, string s, double sal, string p) {
        name = n;
        age = a;
        department = d;
        subject = s;
        salary = sal;
        post = p;
    }

    void show() override {
        cout << "\n----- Teacher Details -----" << endl;
        cout << "College Name: " << collegeName << endl;
        cout << "Address: " << address << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
        cout << "Post: " << post << endl;
    }
};

int main() {

    Student s1(12, 9876543210, "BTech CSE", 3, "CPP", "2024", "vivek@gmail.com");

    s1.setCollege("JECRC University", "Jaipur");

    Teacher t1("Sharma Sir", 45, "CSE", "OOP", 85000, "Professor");

    t1.setCollege("JECRC University", "Jaipur");

    College *c;

    c = &s1;
    c->show();

    c = &t1;
    c->show();

    return 0;
}