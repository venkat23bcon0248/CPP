#include <iostream>     
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> heights(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    vector<int> expected = heights;
    sort(expected.begin(), expected.end());
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(heights[i] != expected[i]) {
            count++;
        }
    }
    cout << "Number of students not in the right position: " << count << endl;
    return 0;
}