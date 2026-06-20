#include <iostream>
using namespace std;

bool fun(int n) {

    if(n == 0) {
        return false;
    }

    if(n == 1) {
        return true;
    }

    return (n % 2 == 0) && fun(n / 2);
}

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(fun(n)) {

        cout << "The number is power of 2";
    }

    else {

        cout << "The number is NOT power of 2";
    }

    return 0;
}