#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    sort(arr, arr + n);


    int answer[n];

    int middle = (n - 1) / 2;

    int last = n - 1;


    for(int i = 0; i < n; i++) {

        if(i % 2 == 0) {

            answer[i] = arr[middle];
            middle--;
        }

        else {

            answer[i] = arr[last];
            last--;
        }
    }


    cout << "Wiggle Sorted Array: ";

    for(int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }

    return 0;
}