#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 8, 2, 9, 1};
    int key;
    bool found = false;

    cout << "Enter element to find: ";
    cin >> key;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = true;
            break;
        }
    }

    if(found)
        cout << "true";
    else
        cout << "false";

    return 0;
}