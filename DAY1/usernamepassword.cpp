#include <iostream>
#include <string>
using namespace std;

int main() {
    string username = "admin";
    string password = "1234";

    string u, p;
    cin >> u >> p;

    if(u == username && p == password)
        cout << "Valid password login success";
    else
        cout << "Invalid credentials try again";
}