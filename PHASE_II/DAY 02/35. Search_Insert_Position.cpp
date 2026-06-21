#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    int start = 0;
    int end = n - 1;

    while(start <= end) {

        int middle = (start + end) / 2;

        if(arr[middle] == target) {
            cout << "Target found at index: " << middle;
            return 0;
        }

        else if(arr[middle] < target) {
            start = middle + 1;
        }

        else {
            end = middle - 1;
        }
    }

    cout << "Target should be inserted at index: " << start;

    return 0;
}