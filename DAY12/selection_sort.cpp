#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++) {

        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++) {

        int mini = i;

        for(int j = i + 1; j < n; j++) {

            if(arr[mini] > arr[j]) {

                mini = j;
            }
        }

        swap(arr[i], arr[mini]);
    }

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++) {

        cout << arr[i] << " ";
    }

    return 0;
}