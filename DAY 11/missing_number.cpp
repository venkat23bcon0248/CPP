// Find the one missing number from a sequence of numbers from 0 to n.

#include <iostream>
using namespace std;
class Solution {
public:
    int missingNumber(int arr[], int size) {

        int n = size; // Since one number is missing, the size of the array is n

        // Calculate the expected sum of numbers from 0 to n
        int expectedSum = n * (n + 1) / 2;

        // Calculate the actual sum of the given array
        int actualSum = 0;
        for (int i = 0; i < size; i++) {
            actualSum += arr[i];
        }

        // The missing number is the difference between expected and actual sums
        return expectedSum - actualSum;
    }
};