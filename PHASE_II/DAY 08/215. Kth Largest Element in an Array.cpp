#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << "Kth largest element: " << arr[n - k] << endl;
    return 0;
}