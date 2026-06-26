#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int K;
    cout << "Enter the value of K: ";
    cin >> K;   
    int max_sum = -1;
    int pair1 = -1, pair2 = -1;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            if(sum < K && sum > max_sum) {
                max_sum = sum;
                pair1 = arr[i];
                pair2 = arr[j];
            }
        }
    }
    if(max_sum == -1) {
        cout << "No pair found with sum less than " << K << endl;
    } else {
        cout << "The pair with the largest sum less than " << K << " is: (" << pair1 << ", " << pair2 << ") with sum = " << max_sum << endl;
    }
    return 0;
}