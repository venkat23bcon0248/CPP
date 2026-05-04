#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter numbers (negative to stop): " << endl;

    while (true) {
        cin >> num;

        if (num < 0) {
            break;   
        }

        cout << num << " ";  
    }

    return 0;
}