#include <iostream>
using namespace std;

int main() {
    int p;
    cin >> p;

    if(p >= 0 && p <= 100) {
        if(p >= 90) cout << "A";
        else {
            if(p >= 75) cout << "B";
            else {
                if(p >= 60) cout << "C";
                else {
                    if(p >= 50) cout << "D";
                    else cout << "F";
                }
            }
        }
    } else {
        cout << "Invalid";
    }
}