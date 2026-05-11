#include <iostream>
using namespace std;

class Solution {

public:

    int binarySearch(int arr[], int size, int target) {

        int start = 0;
        int end = size - 1;

        while(start <= end) {

            int mid = start + (end - start) / 2;

            if(arr[mid] == target) {
                return mid;
            }

            else if(target > arr[mid]) {
                start = mid + 1;
            }

            else {
                end = mid - 1;
            }
        }

        return -1;
    }
};

int main() {

    Solution s;

    int arr[] = {10, 20, 30, 40, 50};

    int result = s.binarySearch(arr, 5, 40);

    cout << "Found at index: " << result;

    return 0;
}