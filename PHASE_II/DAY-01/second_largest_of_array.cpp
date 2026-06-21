#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for ( int i = 0; i<n; i++){
        cout << "enter elements";
        cin >> arr[i];
    }
    int max = arr[0];
    for ( int i = 1; i<n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
        else{
            max = max;
        }
    }

    int second_max = arr[0];
    for ( int i = 1; i<n; i++){
        if (arr[i] > second_max && arr[i] < max){
            second_max = arr[i];
        }
        else{
            second_max = second_max;
        }
    }
    cout << "Second Maximum element: " << second_max << endl;
    return 0;
    
}