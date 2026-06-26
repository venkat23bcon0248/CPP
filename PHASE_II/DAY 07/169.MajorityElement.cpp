#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int half = n / 2;

    sort(arr, arr + n);

    int majority_element = 0;

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > half) {
            majority_element = arr[i];
            break;
        }
    }

    cout << "The majority element is: " << majority_element << endl;

}