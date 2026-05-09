# include <iostream>
using namespace std;
int main(){
    int arr [5] = {1,2,3,4,5};
    int answer = 0;
    for ( int i = 0; i<5; i++){
        answer = answer + arr[i];
    }
    cout << "Sum of array elements: " << answer << endl;
    return 0;
}