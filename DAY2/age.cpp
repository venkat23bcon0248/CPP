#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if(age >= 100)
        cout << "Eligible to vote and comes under century category";
    else if(age >= 18 && age <= 79)
        cout << "Eligible to vote";
    else if(age >= 0 && age <= 17)
        cout << "Child and can't vote";
}