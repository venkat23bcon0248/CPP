#include<iostream>
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

    bool hasDuplicate = false;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                hasDuplicate = true;
                break;
            }
        }
        if(hasDuplicate){
            break;
        }
    }

    if(hasDuplicate){
        cout<<"true";
    } else {
        cout<<"false";
    }

    return 0;
}