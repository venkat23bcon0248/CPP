#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int element;
    cout<<"Enter the element to be removed: ";
    cin>>element;

    int new_array[n];
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i] != element){
            new_array[j] = arr[i];
            j++;
        }
    }
    cout<<"Array after removing the element: ";
    for(int i=0; i<j; i++){
        cout<<new_array[i]<<" ";
    }
    return 0;
}