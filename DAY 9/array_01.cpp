# include <iostream>

using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++){

        cout << arr[i] << " ";

    }

    for (int i =0; i<5; i++){
        
        cout << "enter elements";

        cin >> arr[i]; 
        
    }

    return 0;
}