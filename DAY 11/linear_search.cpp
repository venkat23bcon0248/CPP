#include <iostream>
using namespace std;

class Solution {
public:

    int linearSearch(int arr[], int size, int target) {

        for(int i = 0; i < size; i++) {

            if(arr[i] == target) {
                return i;
            }
        }

        return -1;
    }
};

int main() {

    Solution s;

    int arr[] = {10, 20, 30, 40, 50};

    int result = s.linearSearch(arr, 5, 30);

    cout << result;

    return 0;
}