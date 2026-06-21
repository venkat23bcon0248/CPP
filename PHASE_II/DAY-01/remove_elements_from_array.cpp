#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 5, 6, 1, 7};
    int newArr[5];
    int j = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] != 1) {
            newArr[j] = arr[i];
            j++;
        }
    }

    cout << "Array after removing 1: ";

    for(int i = 0; i < j; i++) {
        cout << newArr[i] << " ";
    }

    return 0;
}