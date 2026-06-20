#include <iostream>
using namespace std;

class Student {
public:
    static int regNo;

    Student() {
        regNo++;
    }

    static void showRegNo() {
        cout << "Reg No: " << regNo << endl;
    }
};

int Student::regNo = 100;

int main() {

    Student s1;
    Student s2;
    Student s3;

    Student::showRegNo();

    return 0;
}