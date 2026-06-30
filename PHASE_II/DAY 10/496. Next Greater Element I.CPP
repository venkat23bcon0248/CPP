#include <iostream>
#include <vector>   
#include <stack>
using namespace std;
int main() {
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    vector<int> result(nums1.size(), -1);
    stack<int> s;
    for (int i = nums2.size() - 1; i >= 0; --i) {
        while (!s.empty() && s.top() <= nums2[i]) {
            s.pop();
        }
        if (!s.empty()) {
            for (int j = 0; j < nums1.size(); ++j) {
                if (nums1[j] == nums2[i]) {
                    result[j] = s.top();
                    break;
                }
            }
        }
        s.push(nums2[i]);
    }
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
